#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int n;
    int r;
    int sum=0;
    
    printf("第一項:");
    scanf("%d",&n);
    printf("項數:");
    scanf("%d",&x);
    printf("公比:");
    scanf("%d",&r);
    
    for(int i=0;i<x;i++){
        sum=sum+(n*pow(r,i));
    }
    
    printf("%d",sum);

    return 0;
}
