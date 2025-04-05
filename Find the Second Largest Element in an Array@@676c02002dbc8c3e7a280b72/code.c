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
    int sedmax = INT_MIN;
    for(int j=0;j<n;j++){
        if(max!=arr[j] && sedmax < arr[j]){
            sedmax = max;
            sedmax = arr[j];
        }
    }

    printf("%d",sedmax);

    return 0;
}
