#include <stdio.h>

int main() {
    int a, c;
    scanf("%d",&a,&c);
    if(a<c){
        printf("Profit ");
    }
    else if(a >c){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}