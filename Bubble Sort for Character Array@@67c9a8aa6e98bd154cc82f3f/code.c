#include<stdio.h>
void bubbleSort(char arr[], char n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
                char temp = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] =temp;
            }
        }
    }
}
void printArray(char arr[],int n){
    for(int i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}