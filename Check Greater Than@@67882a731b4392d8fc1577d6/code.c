#include <stdio.h>
void great(int a,int b){
    if(a>b){
        printf("True");
    }
    else{
        printf("False");
    }
}


int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    great(a,b);

    return 0;
}