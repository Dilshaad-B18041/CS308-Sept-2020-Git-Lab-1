/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Comment before main()
int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}
	char *ch = argv[1], *ch1;
	ch1 = ch;
	ch++;
	int flag = 1;
	while (*ch != '\0')
	{
		if (!(*ch >= 48 && *ch <= 57))
		{
			flag = -1;
			break;
		}
		ch++;
	}
	if (flag == 1)
	{
		int input;
		if (*ch1 == 45)
		{
			argv[1]++;
			input = atoi(argv[1]);
			printf("Sqrt of -%d is %fi\n", input, sqrt(input));
		}
		else
		{
			input = atoi(argv[1]);
			printf("Sqrt of %d is %f\n", input, sqrt(input));
		}
	}
	else
	{
		printf("Input is not a valid number\n");
	}
	// Comment added in negativeSupport to check for conflicts
	printf("End of program exiting...\n");
	return (0);

} // end main
