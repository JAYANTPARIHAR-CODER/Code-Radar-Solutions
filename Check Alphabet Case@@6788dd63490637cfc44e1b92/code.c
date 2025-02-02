#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if((ch>64) && (ch<90)){
        printf("Uppercase ",ch);
    }
    else{
        printf("Lowercase"&ch);
    }

    return 0;
}