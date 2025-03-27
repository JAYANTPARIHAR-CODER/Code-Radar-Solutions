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
        if(max<arr[i]){
            max=arr[i];

        }
    }
    int min=INT_MIN;
    for(int j=0;j<n;j++){
        if(min>arr[j]){
            min=arr[j];
        }
    }
    printf("%d %d",max,min);

    return 0;
}