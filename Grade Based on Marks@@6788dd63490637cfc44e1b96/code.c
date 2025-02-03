#include <stdio.h>

int main() {
    int mar;
    // char A,B,C,D,F;
    scanf("%d",&mar);
    if(mar>=90){
        printf("A");
    }
    else if((mar>=80) && (mar<90)){
        printf("B");
    }
    else if((mar>=70) && (mar<80)){
        printf("C")
    }
    else if((mar>=60) && (mar<70)){
        printf("D");
    }
    else(mar<60){
        printf("F");
    }

    return 0;
}