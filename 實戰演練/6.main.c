#include <stdio.h>
#include <math.h>

int main(){
    double x1;
    double x2;
    double y1;
    double y2;
    double x3;
    double y3;
    
    scanf("%lf",&x1);
    scanf("%lf",&y1);
    scanf("%lf",&x2);
    scanf("%lf",&y2);
    scanf("%lf",&x3);
    scanf("%lf",&y3);
    
    double a;
    double b;
    double c;
    
    a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x1-x3),2)+pow((y1-y3),2));
    
    double s;
    double A;
    
    s=(a+b+c)/2;
    A=sqrt(s*(s-a)*(s-b)*(s-c));
    
    printf("AB邊長為%.2f\nBC邊長為%.2f\nAC邊長為%.2f\n三角形面積為%.2f",a,b,c,A);

    return 0;
}
