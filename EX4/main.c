#include <stdio.h>

int main()
{
    FILE* fp;
    int a[3]={0,1,2};
    char b[3]={'A','B','C'};
    float c[3]={1.1,1.2,1.3};
    
    fp=fopen("a.bin","wb");
    if(fp==NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }
    
    fwrite(a,sizeof(int),3,fp);
    fwrite(b,sizeof(char),3,fp);
    fwrite(c,sizeof(float),3,fp);
    fclose(fp);
    
    int ra[3];
    char rb[3];
    float rc[3];
    
    fp=fopen("a.bin","rb");
    if(fp==NULL){
        printf("無法開啟檔案!\n");
        return 1;
    }
    
    fread(ra,sizeof(int),3,fp);
    fread(rb,sizeof(char),3,fp);
    fread(rc,sizeof(float),3,fp);
    
    for(int i=0;i<3;i++){
        printf("%d ",ra[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%c ",rb[i]);
    }
    printf("\n");
    for(int i=0;i<3;i++){
        printf("%.6f ",rc[i]);
    }
    printf("\n");
    

    return 0;
}
