#include <stdio.h>
/**
 * main -Entry point
 * Return: 0
 */

int main(void)
{
        printf("Size of a char: %lu byte(s)", sizeof(char));
        printf("\nSize of an int: %lu byte(s)", sizeof(int));
        printf("\nSize of a long int: %lu byte(s)", sizeof(long));
        printf("\nSize of long long int: %lu byte(s)", sizeof(long long));
        printf("\nSize of a float: %lu byte(s)", sizeof(float));

                return 0;

}
