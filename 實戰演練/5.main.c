#include <stdio.h>

int main(){
    int n;
    double p;
    scanf("%d",&n);
    scanf("%lf",&p);
    
    double x;
    double y;
    x=n*1.15*p;
    y=n*1.05*p;
    
    
    printf("匯率為一日幣等於%.2f台幣\nPS5價錢為%d日幣\n15%稅金時價格為%.2f台幣,折免10%稅金後價格為%.2f台幣",p,n,x,y);

    return 0;
}
