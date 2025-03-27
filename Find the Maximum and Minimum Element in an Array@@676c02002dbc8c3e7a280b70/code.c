#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[]={n};
    int max;
    int min;
    for(int i=0;i<=n;i++){
        if(max<arr[i]){
            max=arr[i];
            printf("%d",arr[i]);
        }
        
    }
    return 0;
}