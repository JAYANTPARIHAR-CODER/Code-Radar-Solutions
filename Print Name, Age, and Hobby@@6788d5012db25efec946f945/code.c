#include <stdio.h>



int main() {
    char str1[100];
    int age;
    char str[100];
    scanf("%s %d %s",&str1, &age, &str);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",age);
    printf("Hobby: %s",str);

    return 0;
}