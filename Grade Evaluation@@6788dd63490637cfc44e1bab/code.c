#include <stdio.h>

int main() {
    char ch;
    scanf("%c",);
    if(ch==A){
        printf("Excelleient");
    }
    else if(ch==B){
        printf("Good");
    }
    else if(ch==C){
        printf("Average");
    }
    else if(ch ==D){
        printf("Below");
    }
    else if(ch ==F){
        printf("Average");
    }
    else if(ch<=F){
        printf("Fail");
    }
    else{
        printf("Invalid grade");
    }

    return 0;
}