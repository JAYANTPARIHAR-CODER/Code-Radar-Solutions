#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int isPrime =1;

    if(n<=1){
        isPrime = 0;
    }
    else{
        for(int i=2;i<=n-1;i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
        }
    }
        
    if(isPrime = 1){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    return 0;
}