#include <stdio.h>

int main() {
    int N;
    scadnf("%d",N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N+1-i,j--){
            printf("*");
        }     
    }    

    return 0;
}