#include <stdio.h>

int main() {
    int b;
    scanf("%d",&b);
    if(b>=90){
        printf("A");
    }
    else if((b>=80) && (b<90)){
        printf("B");
    }
    else if((b>=70) && (b<80)){
        printf("C");
    }
    else if((b>=60) && (b<70)){
        printf("D");
    }
    else(b<60){
        printf("F");
    }

    return 0;
}