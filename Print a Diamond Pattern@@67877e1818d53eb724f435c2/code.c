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
        for (int i = n - 2; i >= 1; i -= 2) {
            for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}