#include<stdio.h>
int main(){

    int n;
    scanf("%d",&n);
    int arr[6] ={1,2,3,4,5,7};
    for(int i=0;i<n/2;i++){
            int temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;
    }
    for(int i=0;i<=2;i++){
            int temp = arr[i];
            arr[i] = arr[n-4-i];
            arr[n-4-i] = temp;
    }
    for(int i=3;i<n-1-i;i++){
            int temp = arr[i];
            arr[i] = arr[n-1-i];
            arr[n-1-i] = temp;
    }

    for(int i=0;i<=5;i++){
        printf("%d ",arr[i]);
    }
    


    return 0;
}