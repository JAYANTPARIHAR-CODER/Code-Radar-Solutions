#include <stdio.h>
int main() {
    int a;
    int msb= 0X80000000;
    scanf("%d",&a);
    if(a & msb){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}