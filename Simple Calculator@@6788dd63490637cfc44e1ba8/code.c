#include <stdio.h>


int main() {
    int a,b,ch;
    scandf("%d %d %c",&a,b, ch);
    if(ch ==1){
        printf("%d %d",a+b);
    }
    if(ch==2){
        printf("%d %d",a-b);

    }
    if(ch==3){
        printf("%d %d ",a*b);
    }
    if(ch==4){
        printf("%d %d",a/b);
    }

    return 0;
}