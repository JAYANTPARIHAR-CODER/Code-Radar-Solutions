#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++){
        // if (a=1) a=0;
        // else a=1;
        for(int j=1;j<=i;j++){
            printf("%d ",a);
            if(a==0)a=1;
            else a=0;
        }
        if(i%2==0){
            a=1;
        }else a=0;
        printf("\n");
}
    return 0;
}
    