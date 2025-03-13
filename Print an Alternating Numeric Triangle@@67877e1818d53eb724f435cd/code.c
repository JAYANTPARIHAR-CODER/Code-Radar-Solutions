#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
            a= a+1;
        }
        printf("\n");
}
    return 0;
}