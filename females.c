#include <stdio.h>

int main() {
    int age;
    char gender, marital_status;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your gender (M or F): ");
    scanf(" %c", &gender); 
    printf("Enter your marital status (Y or N): ");
    scanf(" %c", &marital_status);
    if (gender == 'F') {
        if (marital_status == 'Y') {
            printf("You will work for 10LPA.\n");
        } else if (marital_status == 'N') {
            printf("You will work for 12LPA.\n");
        } else {
            printf("stay single\n");
        }
    } else if (gender == 'M') {
        if (age >= 20 && age <= 40) {
            printf("You will work for 15LPA.\n");
        } else if (age > 40 && age <= 60) {
            printf("You will work for 20LPA.\n");
        } else {
            printf("we do not care\n");
        }
    } else {
        printf("ERROR: transgender\n");
    }

    return 0;
}
