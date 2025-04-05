#include <stdio.h>

int main() {
    int size;
    //printf("Enter the size ");
    scanf("%d", &size);
    int arr[size];
    //printf("Enter the elements ");
    for(int i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int max =INT_MIN;
    for(int i=0;i<n;i++){
        if(max>arr[i]){
            max =arr[i];
        }
    }
    int sedmax= INT_MIN;
    for(int i=0;i<n;i++){
        if(sedmax!=max || sedmax<arr[i]);
    }

    printf("%d",sedmax);

    return 0;
}
