#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if((ch>64) && (ch<90)){
        printf("Uppercase %c",ch);
    }
    else{
        printf("Lowercase %c"&ch);
    }

    return 0;
}