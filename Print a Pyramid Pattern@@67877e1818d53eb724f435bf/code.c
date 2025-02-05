#include <stdio.h>
int ctr = 1
int main(){
    int a;
    scanf("%d",&a);
    for (int i = 0 ; i<a;i++){
        for (int j = a;j<i;j--){
            printf(" ");
        }
        for (int k = a; k<(2*ctr-1);k++){
            printf("*");
        }
        ctr++;
        printf("\n");
        
    }
    
}