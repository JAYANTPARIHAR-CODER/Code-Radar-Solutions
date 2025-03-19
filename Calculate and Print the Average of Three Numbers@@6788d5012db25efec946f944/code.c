#include <stdio.h>

float avg(int a,int b,int c){
   float cal = (a+b+c)/3;
    return cal;
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    // float average= (a+b+c)/3.0;
    // printf("Average: %.2f",average);
    printf("Average: %.2f",avg(a,b,c));
    return 0;
}