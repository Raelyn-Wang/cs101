#include <stdio.h>

int main(){
    int n;
    
    while(1){
        scanf("%d",&n);
        
        if(n==-1){
            printf("bye!");
            return 0;
        }
        printf("%d\n",n*n);
        
    }
   
    return 0;
}
