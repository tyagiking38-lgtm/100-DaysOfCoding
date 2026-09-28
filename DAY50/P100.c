#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k;

    scanf("%s", str);

    for(i = 0; i < strlen(str); i++)
    {
        for(j = i; j < strlen(str); j++)
        {
            for(k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }

            if(!(i == strlen(str) - 1 && j == strlen(str) - 1))
                printf(",");
        }
    }

    return 0;
}