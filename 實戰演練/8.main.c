#include <stdio.h>

int main(){
    int i;
    int sum=0;
    
    for(i=3;i<=60;i+=3){
        if(i%2==1){
            sum=sum+i;
        }else{
            sum=sum-i;
        }
    }
    
    printf("%d",sum);

    return 0;
}
