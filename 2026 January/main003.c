#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    int thousand=0,hundred=0,ten=0,digit=0;
    
    if(x<0||x>10000){
        printf("wrong!");
        return 0;
    }
    
    int n=0;
    while(x>0){
        int r=x%10;
        
        if(n==0) digit=r;
        if(n==1) ten=r;
        if(n==2) hundred=r;
        if(n==3) thousand=r;
        
        x/=10;
        n++;
    }
    
    printf("thousand:%d\nhundred:%d\nten:%d\ndigit:%d\n",thousand,hundred,ten,digit);
    
   
    return 0;
}
