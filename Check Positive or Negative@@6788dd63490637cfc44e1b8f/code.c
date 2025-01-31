#include <stdio.h>


int main() {
    int a,b,c;
    sacnf("%d %d %d",&a,&b,&c);
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