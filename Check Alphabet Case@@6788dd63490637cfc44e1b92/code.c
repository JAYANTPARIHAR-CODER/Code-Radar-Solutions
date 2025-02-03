#include <stdio.h>


int main() {
    char ch;
    scanf("%c",&ch);
    if((ch>64) && (ch<90)){
        printf("Uppercase");
    }
    else{
        printf("Not an Lowercase");
    }
    

    return 0;
}