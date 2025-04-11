#include <stdio.h>
#include<limits.h>

int main() {
    int n;
    //printf("Enter the size ");
    scanf("%d", &n);
    int arr[n];
    //printf("Enter the elements ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max =arr[i];
        }
    }
    int smax = INT_MIN;
    for(int j=0;j<n;j++){
        if(max!=arr[j] && smax < arr[j]){
            smax = max;
            smax = arr[j];
        }
    }
    printf("%d",smax);

    return 0;
}
