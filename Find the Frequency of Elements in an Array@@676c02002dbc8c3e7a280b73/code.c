#include<stdio.h>
int main() {
    int n,arr[1000];
    scanf("%d",&n);
    for (int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    int count[n];
    for (int i=0;i<n;i++){
        if (count[i]==1)
            continue;
        int counting =0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count[j]==1;
                counting++;
            }
        }
        printf("%d %d",arr[i],counting);
    }
}