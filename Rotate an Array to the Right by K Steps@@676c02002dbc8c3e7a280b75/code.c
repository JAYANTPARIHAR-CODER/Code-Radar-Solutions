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
    for(int i=0,j=k;i<j,i++,j--){
        int temp = arr[i];
        arr[i] =arr[j];
        arr[j] =temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}