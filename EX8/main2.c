#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define COUNTER_FILE "counter.bin"
#define MAX_LOTTO_NUM 7      
#define MAX_LOTTO_NUMSET 5  


int num_in_numset(int num, int numset[], int Len){
    for(int i=0; i<Len; i++){
        if(num == numset[i]) return 1;
    }
    return 0;
}

void init_file(){
    int write_array[1] = {0};
    FILE* fp = fopen(COUNTER_FILE, "rb");

    if(fp == NULL){
        FILE* tmpfp = fopen(COUNTER_FILE, "wb+");
        fwrite(write_array, sizeof(int), 1, tmpfp);
        fclose(tmpfp);
    }else{
        fclose(fp);
    }
}

int get_counter(){
    int read_array[1];
    FILE* fp = fopen(COUNTER_FILE, "rb");
    fread(read_array, sizeof(int), 1, fp);
    fclose(fp);
    return read_array[0];
}

void set_counter(int counter){
    int write_array[1] = {counter};
    FILE* fp = fopen(COUNTER_FILE, "wb");
    fwrite(write_array, sizeof(int), 1, fp);
    fclose(fp);
}

void print_lotto_row(FILE* fp, int n){
    int numset[MAX_LOTTO_NUM] = {0}; 

    fprintf(fp, "[%d]: ", n);

 
    for(int i=0; i<MAX_LOTTO_NUM-1; ){
        int num = (rand() % 69) + 1;
        if(!num_in_numset(num, numset, MAX_LOTTO_NUM-1)){
            numset[i] = num;
            i++;
        }
    }


    while(1){
        int num = (rand() % 10) + 1;
        if(!num_in_numset(num, numset, MAX_LOTTO_NUM-1)){
            numset[MAX_LOTTO_NUM-1] = num;
            break;
        }
    }


    for(int i=0; i<MAX_LOTTO_NUM-1; i++){
        for(int j=0; j<i; j++){
            if(numset[j] > numset[i]){
                int tmp = numset[j];
                numset[j] = numset[i];
                numset[i] = tmp;
            }
        }
    }

    for(int i=0; i<MAX_LOTTO_NUM; i++){
        fprintf(fp, "%02d ", numset[i]);
    }
    fprintf(fp, "\n");
}

void print_lottofile(int num_set, int counter, char lotto_file[]){
    time_t curtime;
    srand(time(NULL));
    time(&curtime);

    FILE* fp = fopen(lotto_file, "w+");

    fprintf(fp, "========= lotto649 =========\n");
    fprintf(fp, "========+ No.%05d +========\n", counter);
    fprintf(fp, "= %.*s =\n", 24, ctime(&curtime));

    for(int i=0; i<MAX_LOTTO_NUMSET; i++){
        if(i < num_set){
            print_lotto_row(fp, i+1);
        }else{
            fprintf(fp, "[%d]: -- -- -- -- -- -- --\n", i+1);
        }
    }

    fprintf(fp, "========= csie@CGU =========\n");
    fclose(fp);
}

void do_lotto_main(int counter){
    char lotto_file[32];
    int num_set = 0;

    snprintf(lotto_file, 32, "lotto[%05d].txt", counter);

    printf("歡迎光臨長庚樂透彩購買機台\n");
    printf("請問您要買幾組樂透彩: ");
    scanf("%d", &num_set);

    print_lottofile(num_set, counter, lotto_file);

    printf("已為您購買的 %d 組樂透組合輸出至 %s\n",
           num_set, lotto_file);
}

int main(){
    init_file();

    int counter = get_counter();
    printf("counter = %d\n", counter);

    do_lotto_main(++counter);

    set_counter(counter);
    return 0;
}
