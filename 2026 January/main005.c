#include <stdio.h>

int main(){
   int x=0;
   scanf("%d",&x);
   
   if(x<1||x>12){
       printf("wrong!");
       return 0;
   }
   
   if(x==1||x==2||x==12){
       printf("Winter");
   }
   else if(x==3||x==4||x==5){
       printf("Spring");
   }
   else if(x==6||x==7||x==8){
       printf("Summer");
   }
   else if(x==9||x==10||x==11){
       printf("Fall");
   }
   return 0;
}
