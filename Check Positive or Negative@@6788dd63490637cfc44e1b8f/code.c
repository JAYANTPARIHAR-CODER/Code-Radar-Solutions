#include <stdio.h>


int main() {
    int a;
    sacnf("%d");
    if(a>0){
        printf("Positive");
    }
    else if(a<0){
        printf("Negtive");
    }
    else{
        printf("Zero"); 
    }

    return 0;
}