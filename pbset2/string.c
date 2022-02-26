#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    string s = get_string("input: ");
    printf("Output: ");
    for (int i = 0, n = strlen(s); s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}