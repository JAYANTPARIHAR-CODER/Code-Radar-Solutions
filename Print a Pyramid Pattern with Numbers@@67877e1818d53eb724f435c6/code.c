#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            printf(" ");
        }
        for(int k=1;k<=2*n-i;k++){
            printf("%d",k);
        }
        printf("\n");
    }
}