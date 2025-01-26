#include <stdio.h>


int main() {
    char ch[100];
    scanf("%c",&ch);
    ch = ch+64;
    printf("ASCII Value:  %d", ch);
    return 0;
}