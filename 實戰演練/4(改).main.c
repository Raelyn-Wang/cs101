#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    
    if(n<0||n>100){
        printf("ERROR");
        return 0;
    }
    switch(n/10){
        case 10:
            printf("A");
            break;
        case 9:
            printf("A");
            break;
        case 8:
            printf("B");
            break;
        case 7:
            printf("C");
            break;
        case 6:
            printf("D");
            break;
        default:
            printf("F");
    }
    return 0;
}
