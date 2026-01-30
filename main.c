#include <stdio.h>
#include <string.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        char str[9] = "";
        if (i % 3 == 0)
        {
            strcat(str, "Fizz");
        }
        if (i % 5 == 0)
        {
            strcat(str, "Buzz");
        }
        if (strlen(str) == 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}
