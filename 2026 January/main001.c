#include <stdio.h>

int main(){
    int y;
    scanf("%d",&y);
    int x=y-1911;
    if(x%12==1){
        printf("Rat");
    }
    if(x%12==2){
        printf("Ox");
    }
    if(x%12==3){
        printf("Tiger");
    }
    if(x%12==4){
        printf("Rabbit");
    }
    if(x%12==5){
        printf("Dragon");
    }
    if(x%12==6){
        printf("Snake");
    }
    if(x%12==7){
        printf("Horse");
    }
    if(x%12==8){
        printf("Goat");
    }
    if(x%12==9){
        printf("Monkey");
    }
    if(x%12==10){
        printf("Rooster");
    }
    if(x%12==11){
        printf("Dog");
    }
    if(x%12==0){
        printf("Pig");
    }
   
    return 0;
}
