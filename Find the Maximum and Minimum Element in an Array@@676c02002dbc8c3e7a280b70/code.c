#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        printf("%d",&arr[i]);
    }
    int max=arr[0];
    int min= arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
            printf("%d",arr[i]);
        }
    }
    for(int j=0;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("%d %d",max,min);

    return 0;
}