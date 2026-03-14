#include <stdio.h>

int main(){
    int x;
    int y;
    int n=1;
    
    
    scanf("%d",&x);
    scanf("%d",&y);
    
    while(y>0){
        n=n*x;
        y--;
    }
    
    printf("x^y=%d",n);

    return 0;
}
