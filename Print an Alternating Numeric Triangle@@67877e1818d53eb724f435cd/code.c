#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            a = a+1;
        }
        printf("\n");
}
    return 0;
}