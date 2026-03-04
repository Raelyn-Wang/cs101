#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n>=90){
        printf("A");
    }else if(80<=n&&n<90){
        printf("B");
    }else if(70<=80&&n<80){
        printf("C");
    }else if(60<=70&&n<70){
        printf("D");
    }else{
        printf("F");
    }
    return 0;
}
