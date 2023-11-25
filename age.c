#include <stdio.h>
#include <cs50.h>

int main() {
int age;
printf("enter age : ");
scanf("%d" , &age);

age >= 18 ? printf("adult \n") : printf("not adult \n");

return 0;
}