#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];

        }
    }
    int min=INT_MIN;
    for(int i=0;i<n;++){
        if(min<arr[i]){
            min=arr[i];
        }
    }
    printf("%d %d",max,min);

    return 0;
}