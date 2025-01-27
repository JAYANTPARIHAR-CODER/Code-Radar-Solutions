#include <stdio.h>


int main() {
    int x,y;
    sacnf("%d %d",&x,&y);
    if(x==y){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}