#include <stdio.h>
#include <math.h>

int main(){
    double a;
    double b;
    double c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
    double x;
    double y;
    
    double D;
    D=b*b-4*a*c;
    
    if(D==0){
        x=(-1*b)/2*a;
        printf("方程式的解為重根 x=%.2f",x);
        return 0;
    }else if(D<0){
        printf("方程式無實數解");
        return 0;
    }
    
    
    x=(-1*b+sqrt(b*b-4*a*c))/(2*a);
    y=(-1*b-sqrt(b*b-4*a*c))/(2*a);
   
    printf("方程式的解為 x1=%.2f, x2=%.2f",x,y);
   
    return 0;
}
