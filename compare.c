#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("S is: ");
    char s[100];
    scanf("%[^\n]s", s);

    printf("T is: ");
    char t[100];
    scanf(" %[^\n]s", t);

    if (s != NULL && t != NULL)
    {
        if (strcmp(s, t) == 0)
        {
            printf("same");
        }
        else
        {
            printf("different");
        }
    }
}