#include <stdio.h>


int main() {
    char n;
    scanf("%c",&n);
    if((n>="A") && (n<="Z")){
        printf("Uppercase %c",&n);
    }
    else{
        printf("Lowercase %c"&n);
    }

    return 0;
}