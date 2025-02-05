#include <stdio.h>
int ctr = 1;
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 0 ; i<a;i++){
        for (int j = i;j<a-1;j--){
            printf(" ");
        }
        for (int k = 0; k<(2*ctr-1);k++){
            printf("*");
        }
        ctr++;
        printf("\n");
        
    }
    
}