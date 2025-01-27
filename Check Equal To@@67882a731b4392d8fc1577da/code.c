#include <stdio.h>


int main() {
    int x;
    int y;
    sacnf("%d %d",&x,&y);
    if(x==y){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}