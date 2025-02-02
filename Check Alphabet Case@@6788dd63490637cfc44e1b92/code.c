#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if((ch>="A") && (ch<="Z")){
        printf("Uppercase %c",ch);
    }
    else{
        printf("Lowercase %c"&ch);
    }

    return 0;
}