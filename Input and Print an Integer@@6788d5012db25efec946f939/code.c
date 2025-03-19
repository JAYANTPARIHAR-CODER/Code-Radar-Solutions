#include <stdio.h>

void print(int n){
    printf("You entered: %d",n);
}
int main() {
    int n;
    scanf("%d",&n);
    print(n);
    return 0;
}