#include <stdio.h>
int main(){
    int age;
    scanf("%d",&age);

    if (age>18){
        printf("You are above 18.\n");
    }
    else{
        printf("You are a minor.\n");
    };
    return 0;
}