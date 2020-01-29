#include <stdio.h>

char		*ft_strcapitalize(char *str)
{
	int i;
	int q;

	i = 0;
	q = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) || (str[i] >= 123 && str[i] <= 126))
			q = 1;
		else if ((q = 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			q = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			q = 0;
		else if ((q != 1) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			q = 0;
		i++;
	}
	return (str);
}

int main()
{
	char str[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s \n", str);
}
