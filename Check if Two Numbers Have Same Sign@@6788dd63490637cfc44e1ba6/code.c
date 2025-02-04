#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>0) && (-a==-b)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }

    return 0;
}