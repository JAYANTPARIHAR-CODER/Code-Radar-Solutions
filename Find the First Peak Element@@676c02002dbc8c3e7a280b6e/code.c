#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    scanf("%d\n",&n);
    int arr[n];
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int countmax = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<max){
            countmax++;
        }
    }
    printf("%d",countmax);
}