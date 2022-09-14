
#include <stdio.h>

int main(void)
{
	int lower = 97;

	while (lower <= 122)
	{
		if (lower == 101 || lower == 113)
		{
			lower++;
			continue;
		}
		putchar(lower);

		lower++;
	}
	putchar(10);
	return (0);
}
