#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    for(int i=3;i<n/2;i++){
        int temp = arr[i];
        arr[i] =arr[n-k-i];
        arr[n-k-i] =temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}