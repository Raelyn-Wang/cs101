#include <stdio.h>

int main(){
    int i=0;
    int j=0;
    
    for(i=1;i<=9;i++){
        for(j=1;j<=9;j++){
            if(j!=9){
                printf("%d*%d=%d\t",i,j,i*j);
            }else{
                printf("%d*%d=%d\n",i,j,i*j);
            }
        }
    }
    return 0;
}
