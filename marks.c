#include <stdio.h>
int main() {
    int marks;
    printf("enter marks :");
    scanf("%d" , &marks);

    if(marks > 50) {
        printf("passed\n");
    }
    else if(marks > 30) {
        printf(" fail\n");
    }
    else {
        printf("invalid marks\n");
    }

    printf("thank you");
    return 0;
}