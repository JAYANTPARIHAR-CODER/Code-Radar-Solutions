#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp =arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}