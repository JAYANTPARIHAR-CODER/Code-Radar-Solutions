#include <stdio.h>
int ctr = 1;
int main(){
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int k=1;k<=a-i;k++){
            printf(" ");
            }
            for(int j=1;j<=2*n-i;j++){
                printf("*");
        }
        printf("\n");        
    }
       
}