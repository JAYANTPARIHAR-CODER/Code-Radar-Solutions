#include <stdio.h>

int main() {
    int j, k,l;
    scanf("%d %d %d",&j,&k);
    if(j==k && k==l){
        printf("Equialteral");
    }
    else if(j==k && k==l){
        printf("Isosceles");
    }
    else{
        printf("Scalene")
    }

    return 0;
}