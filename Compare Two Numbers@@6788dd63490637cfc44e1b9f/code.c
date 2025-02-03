#include <stdio.h>


int main() {
    int a,c;
    scanf("%d %d",&a,&c);
    if(a==c){
        printf("Equal");
    }
    if(a>c){
        printf("First");
    }
    else{
        printf("Second");
    }
    return 0;
}