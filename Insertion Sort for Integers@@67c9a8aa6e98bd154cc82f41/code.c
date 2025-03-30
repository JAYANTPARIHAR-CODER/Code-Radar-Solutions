#include<stdio.h>
void insertion(int arr[],int n){
    for(int i=n-1;i<0;i--){
        for(int j=0;j<n-1;j++){
            if(arr[j]<arr[j+1]){
                int temp =arr[a+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}