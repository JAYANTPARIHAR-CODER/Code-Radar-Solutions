#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int arr[];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = INT_MIN;
    for(int i=0;i<=n;i++){
        if(max<= arr[i]){
            max = arr[i];
        }
    }
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(min >= arr[i]){
            min = arr[i];
    }
}
return 0;

}
