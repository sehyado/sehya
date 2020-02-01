/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:03:42 by mlee              #+#    #+#             */
/*   Updated: 2020/02/01 22:39:53 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	skyll(char *a, char num[4][4])
{
	int i;
	int j;
	int q;
	int count;

	i = 1;
	while (i <= 16)
	{
		j = 0;
		while (j <= 3)
		{
			if (i >= 1 && i <= 4)
			{
				q = 0;
				while (q <= 2)
				{
					if (num[q][j] < num[q + 1][j])
						count = count + 1;
					q++;
				}
			}
			j++;
		}
		i++;
	}
}

count = 1;
temp = a[q][j];
while (q < 3)
{
	if (temp < a[q + 1][j])
	{
		temp = a[q + 1][j];
		count++;
	}
	q++;
}
void	sss(char *a, char num[4][4])
{
	int i;
	int j;
	int q;
	int r;
	int count;
	int tmp;

	i = 0;
	j = 0;
	count = 0;
	tmp = num[i][j];
	while (i <= 4)
	{
		q = 0;
		if (i >= 1 && i <= 4)
		{
			while (q <= 2)
			{
				if (tmp < num[q + 1][j])
				{
					tmp = num[q + 1][j];
					count++;
				}
				q++;
			}
			if (*a[i] == count);
 52     j = 0;
		}
		i++;
		j++;
	}
	if (r == 4)
		return (1);
	return (0);
}


	num[q][j] < num[i][j];

	i++;
	j++;
	return (count);
	}

	 
}

if (*a[i] == count)
	return(1);
return(0);


void	skyll_1(char *a, char num[4][4])
{
	int i;
	int j;
	int q;
	int count;

	i = 1;
	while (i <= 16)
	{
		j = 0;
		while (j <= 3)
		{
			if (i >= 9 && i <= 12)
			{
				q = 0;
				while (q <= 2)
				{
					if (num[j][q] < num[j][q + 1])
					q++;
				}
			}
			j++;
		}
		i++;
	}
}

void	skyll_2(char *a, char num[4][4])
{
	int i;
	int j;
	int q;
	int count;

	i = 1;
	while (i <= 16)
	{
		j = 0;
		while (j <= 3)
		{
			if (i >= 5 && i <= 8)
			{
				q = 3;
				while (q >= 1)
				{
					if (num[q][j] < num[q - 1][j])
						count = count + 1;
					q++;
				}
			}
			j++;
		}
		i++;
	}
}

void	skyll_3(char *a, char num[4][4])
{
	int i;
	int j;
	int q;
	int count;

	i = 1;
	while (i <= 16)
	{
		j = 0;
		while (j <= 3)
		{
			if (i >= 13 && i <= 16)
			{
				q = 3;
				while (q >= 1)
				{
					if (num[j][q] < num[j][q -  1])
						count = count + 1;
					q++;
				}
			}
			j++;
		}
		i++;
	}
}

void	check(char c)
{
	int y = 8;

	if (y == c)
		return (1);
	return (0);
	if((skyll(c) == c) || (skyll_1(c) == c) || (skyll_2(c) == c) || (skyll_3(c) == c))
		return (1);
	return (0);
}
