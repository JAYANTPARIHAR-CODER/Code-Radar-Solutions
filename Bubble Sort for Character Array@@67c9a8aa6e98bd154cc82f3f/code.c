#include<stdio.h>
void bubbleSort(char arr, char n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] =temp;
            }
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}