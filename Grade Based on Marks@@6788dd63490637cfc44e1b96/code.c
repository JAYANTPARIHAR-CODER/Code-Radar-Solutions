#include <stdio.h>

int main() {
    char mar;
    // char A,B,C,D,F;
    scanf("%d %d %d %d %d");
    if(mar>=90){
        printf("A");
    }
    if((mar>=80) && (mar<90)){
        printf("B");
    }
    if((mar>=70) && (mar<80)){
        printf("C")
    }
    if((mar>=60) && (mar<70)){
        printf("D");
    }
    if(mar<60){
        printf("F");
    }

    return 0;
}