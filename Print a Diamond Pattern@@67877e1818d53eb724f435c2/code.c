#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
                printf(" ");
        }
        // int a=1;
        for(int k=1;k<=(2*i-1);k++){
            printf("*");
        }
        for(int l=i-1;l<=(2*i-1);l--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}