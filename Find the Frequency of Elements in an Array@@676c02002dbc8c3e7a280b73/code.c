#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int max= INT_MAX;
    int smax =arr[0];
    for(int i=0;i<n;i++){
        if(smax!=max || smax>=arr[i]){
            smax= arr[i];
        }
    }
    printf("%d",smax);

        return 0;
}
