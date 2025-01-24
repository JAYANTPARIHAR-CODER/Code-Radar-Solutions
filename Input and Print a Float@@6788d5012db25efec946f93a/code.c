#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    printf("%s", welcome());
    int n;
    scanf("%d",n);
    printf("You entered: ");
    return 0;
}