#include <stdio.h>
#include <stdlib.h>

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}
int str_len(char *str)
{
	int len = 0;

	while (*str++)
	{
		len++;
	}
	return (len);
}
int str_to_int(char *str)
{
	int result = 0;

	while (*str)
	{
		result = result * 10 + (*str++ - '0');
	}
	return (result);
}
void print_error(void)
{
	printf("Error\n");
	exit(98);
}
int main(int argc, char **argv)
{
	char *num1, *num2;
	int num1_len, num2_len, i, result_len, *result, carry, j, product,
		loading_zero;

	if (argc != 3)
	{
		print_error();
	}
	num1 = argv[1];
	num2 = argv[2];
	num1_len = str_len(num1);
	num2_len = str_len(num2);

	for (i = 0; i < num1_len; i++)
	{
		if (!is_digit(num2[i]))
			print_error;
	}
	result_len = num1_len + num2_len;
	*result = calloc(result_len, sizeof(int));

	for (i = num1_len - 1; i >= 0; i--)
	{
		carry = 0;
		for (int j = num2_len - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] +
				carry;
			result[i + j + 1] = product % 10;
			carry = product / 10;
		}
		result[i] += carry;
	}
	loading_zero = 1;

	for (i = 0; i < result_len; i++)
	{
		if (result[i] != 0)
			loading_zero = 0;
		if (!loading_zero)
			printf("%d", result[i]);
	}
	if (loading_zero)
		printf("0");
	printf("\n");
	free(result);
	return (0);
}
