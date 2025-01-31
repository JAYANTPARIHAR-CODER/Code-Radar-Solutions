#include <stdio.h>

int main() {
    int a;
    sacvdf("%d",a);
    if(a%5==0){
        printf("Divisible");
    }
    else if(a%11==0){
        printf("Not Divisible");
    }

    return 0;
}