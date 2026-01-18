#include <stdio.h>

int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int avg=(x+y+z)/3;
    if(x<0||y<0||z<0){
        printf("wrong!");
        return 0;
    }
    int max=x;
    int min=x;
    
    if(y>x) max=y;
    if(z>x) max=z;
    if(y<x) min=y;
    if(z<x) min=z;
    
    printf("%d\t%d\t%d\t",max,min,avg);
    return 0;
}
