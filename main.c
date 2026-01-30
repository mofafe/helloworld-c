#include <windows.h>
#include <stdio.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
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
