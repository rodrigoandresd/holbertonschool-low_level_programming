#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = '0'; i <= '8'; i++)
    {
        for (j = '0'; j <= '9'; j++)
        {
            if (j > i)
            {
                putchar(i);
                putchar(j);
                if (i != '8')
                {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
    }
    putchar('\n');
    return (0);
}
