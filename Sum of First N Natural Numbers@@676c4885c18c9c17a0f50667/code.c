#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int d;
    scanf("%d",&d);
    for(int i=1;i<=(n/2*((2*i)+(n-1)*d));i++){
        printf("%d",i);
    }
}