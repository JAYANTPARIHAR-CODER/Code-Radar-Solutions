#include <stdio.h>



int main() {
    char str1[100];
    int age;
    char str[100];
    scanf("%s %d %s",&str, &age, &str);
    printf("Name: %s\n",str);
    printf("Age: %d\n",age);
    printf("Hobby: %s",str);

    return 0;
}