#include <cs50.h>
#include <stdio.h>

int main(void)

{
    char c = get_char("Do you Ready? ");

    if (c == 'z' || c == 'Y')
    {
        printf("Yes Ready.\n");
    }
    else if (c == 'c' || c == 'Z')
    {
        printf("Not Ready.\n");
    }
}