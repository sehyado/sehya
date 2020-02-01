#include <stdio.h>
#include <unistd.h>

void	sky1(char *a[], char num[4][4])
{
	int	i;
	int	j;

	i = 1;
	while (i <= 16)
	{
		j = 0;
		if (*a[i] == '1')
		{
			if (i >= 1 && i <= 4)
					num[0][i - 1] = 4 + 48;
			if (i >= 5 && i <= 8)
					num[3][i - 5] = 4 + 48;
			if (i >= 9 && i <= 12)
					num[i - 9][0] = 4 + 48;
			if (i >= 13 && i <= 16)
					num[i - 13][3] = 4 + 48;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char num[4][4];
	int i;
	int j;

	i = 0;
	sky1(argv, num);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			write(1, &num[i][j], 1);
			write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
