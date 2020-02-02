/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:15:28 by junhpark          #+#    #+#             */
/*   Updated: 2020/02/02 21:11:11 by junhpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	sky1_1(char *a[], char num[4][4], int i, int j)
{
	while (++i <= 12)
	{
		j = -1;
		if (*a[i] == '1' && *a[i + 4] == '4')
		{
			if (i >= 9 && i <= 12)
			{
				while (++j < 4)
					num[i - 9][j] = 4 - j + 48;
			}
			if (i >= 1 && i <= 4)
			{
				while (++j < 4)
					num[j][i - 1] = 4 - j + 48;
			}
		}
		if (i == 4)
			i += 4;
	}
}

void	sky1_2(char *a[], char num[4][4], int i, int j)
{
	while (++i <= 12)
	{
		j = -1;
		if (*a[i] == '4' && *a[i + 4] == '1')
		{
			if (i >= 9 && i <= 12)
			{
				while (++j < 4)
					num[i - 9][j] = j + 1 + 48;
			}
			if (i >= 1 && i <= 4)
			{
				while (++j < 4)
					num[j][i - 1] = j + 1 + 48;
			}
		}
		if (i == 4)
			i += 4;
	}
}

void	sky2_1(char *a[], char num[4][4])
{
	int		i;
	int		j;

	i = 1;
	while (i <= 12)
	{
		j = 0;
		if (*a[i] == '1' && *a[i + 4] == '2')
		{
			if (i >= 9 && i <= 12)
			{
				num[i - 9][0] = 4 + 48;
				num[i - 9][3] = 3 + 48;
			}
			if (i >= 1 && i <= 4)
			{
				num[0][i - 1] = 4 + 48;
				num[3][i - 1] = 3 + 48;
			}
		}
		if (i == 4)
			i += 4;
		i++;
	}
}

void	sky2_2(char *a[], char num[4][4])
{
	int		i;
	int		j;

	i = 1;
	while (i <= 12)
	{
		j = 0;
		if (*a[i] == '2' && *a[i + 4] == '1')
		{
			if (i >= 9 && i <= 12)
			{
				num[i - 9][0] = 3 + 48;
				num[i - 9][3] = 4 + 48;
			}
			if (i >= 1 && i <= 4)
			{
				num[0][i - 1] = 3 + 48;
				num[3][i - 1] = 4 + 48;
			}
		}
		if (i == 4)
			i += 4;
		i++;
	}
}

void	sky3(char *a[], char num[4][4])
{
	int		i;
	int		j;

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

void	sky4_1(char *a[], char num[4][4])
{
	int		i;

	i = 1;
	while (i <= 16)
	{
		if ((i >= 1 && i <= 4) || (i >= 9 && i <= 12))
		{
			if (*a[i] == '2' && *a[i + 4] == '3')
			{
				if (i >= 1 && i <= 4)
					num[1][i - 1] = 4 + 48;
				if (i >= 9 && i <= 12)
					num[i - 9][1] = 4 + 48;
			}
		}
		i++;
	}
}

void	sky4_2(char *a[], char num[4][4])
{
	int		i;

	i = 1;
	while (i <= 16)
	{
		if ((i >= 5 && i <= 8) || (i >= 13 && i <= 16))
		{
			if (*a[i - 4] == '3' && *a[i] == '2')
			{
				if (i >= 5 && i <= 8)
					num[2][i - 5] = 4 + 48;
				if (i >= 13 && i <= 16)
					num[i - 13][2] = 4 + 48;
			}
		}
		i++;
	}
}

void	mk_swap(char num[4][4], int i, int a, int b)
{
	char	temp;

	temp = num[a][i];
	num[a][i] = num[b][i];
	num[b][i] = temp;
}

void	swap(char num[4][4], int flag[4][4], int i, int j)
{
	if (j == 0 && flag[i][num[0][i] - 49] == 2 && flag[i][num[1][i] - 49] == 2)
		mk_swap(num, i, 0, 1);
	if (j == 1 && flag[i][num[0][i] - 49] == 2 && flag[i][num[2][i] - 49] == 2)
		mk_swap(num, i, 0, 2);
	if (j == 2 && flag[i][num[0][i] - 49] == 2 && flag[i][num[3][i] - 49] == 2)
		mk_swap(num, i, 0, 3);
	if (j == 3 && flag[i][num[1][i] - 49] == 2 && flag[i][num[2][i] - 49] == 2)
		mk_swap(num, i, 1, 2);
	if (j == 4 && flag[i][num[1][i] - 49] == 2 && flag[i][num[3][i] - 49] == 2)
		mk_swap(num, i, 1, 3);
	if (j == 5 && flag[i][num[2][i] - 49] == 2 && flag[i][num[3][i] - 49] == 2)
		mk_swap(num, i, 2, 3);
}

void	zero(int in[4])
{
	int		i;

	i = 0;
	while (i < 4)
	{
		in[i] = -1;
		i++;
	}
}

void	zero_1(int count[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			count[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	same_1(char num[4][4], int count[4][4], int i, int j)
{
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (num[i][j] == '1')
				count[i][0]++;
			if (num[i][j] == '2')
				count[i][1]++;
			if (num[i][j] == '3')
				count[i][2]++;
			if (num[i][j] == '4')
				count[i][3]++;
			j++;
		}
		i++;
	}
}

int		same(char num[4][4])
{
	int		count[4][4];
	int		i;
	int		j;

	zero_1(count);
	i = 0;
	j = 0;
	same_1(num, count, i, j);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (count[i][j] != 1)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		logic_1(char num[4][4], char *a[], int i)
{
	int		temp;
	int		count;
	int		j;
	int		t;

	count = 1;
	j = 1;
	t = 1;
	temp = num[0][i - t];
	while (j < 4)
	{
		if (num[j][i - t] > temp)
		{
			temp = num[j][i - t];
			count++;
		}
		j++;
	}
	if (count == *a[i] - 48)
		return (1);
	return (0);
}

int		logic_2(char num[4][4], char *a[], int i)
{
	int		temp;
	int		count;
	int		j;
	int		t;

	count = 1;
	j = 2;
	t = 5;
	temp = num[3][i - t];
	while (j >= 0)
	{
		if (num[j][i - t] > temp)
		{
			temp = num[j][i - t];
			count++;
		}
		j--;
	}
	if (count == *a[i] - 48)
		return (1);
	return (0);
}

int		logic_3(char num[4][4], char *a[], int i)
{
	int		temp;
	int		count;
	int		j;
	int		t;

	count = 1;
	j = 1;
	t = 9;
	temp = num[i - t][0];
	while (j < 4)
	{
		if (num[i - t][j] > temp)
		{
			temp = num[i - t][j];
			count++;
		}
		j++;
	}
	if (count == *a[i] - 48)
		return (1);
	return (0);
}

int		logic_4(char num[4][4], char *a[], int i)
{
	int		temp;
	int		count;
	int		j;
	int		t;

	count = 1;
	j = 2;
	t = 13;
	temp = num[i - t][3];
	while (j >= 0)
	{
		if (num[i - t][j] > temp)
		{
			temp = num[i - t][j];
			count++;
		}
		j--;
	}
	if (count == *a[i] - 48)
		return (1);
	return (0);
}

int		logic(char num[4][4], char *a[], int i, int count)
{
	while (++i <= 16)
	{
		if (i >= 1 && i <= 4)
		{
			if (logic_1(num, a, i) == 1)
				count++;
		}
		if (i >= 5 && i <= 8)
		{
			if (logic_2(num, a, i) == 1)
				count++;
		}
		if (i >= 9 && i <= 12)
		{
			if (logic_3(num, a, i) == 1)
				count++;
		}
		if (i >= 13 && i <= 16)
		{
			if (logic_4(num, a, i) == 1)
				count++;
		}
	}
	return ((count == 16) ? 1 : 0);
}

int		inspect(char num[4][4], char *a[])
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (same(num) == 1 && logic(num, a, i, count) == 1)
		return (1);
	return (0);
}

void	roop(char *a[], char num[4][4], int flag[4][4])
{
	int		in[4];

	zero(in);
	while (++in[0] <= 5)
	{
		swap(num, flag, 0, in[0]);
		in[1] = -1;
		while (++in[1] <= 5)
		{
			swap(num, flag, 1, in[1]);
			in[2] = -1;
			while (++in[2] <= 5)
			{
				swap(num, flag, 2, in[2]);
				in[3] = -1;
				while (++in[3] <= 5)
				{
					swap(num, flag, 3, in[3]);
					if (inspect(num, a) == 1)
						return ;
				}
			}
		}
	}
	printf("#####");
}

void	put_flag(char num[4][4], int flag[4][4], int i, int j)
{
	j = -1;
	while (++j < 4)
	{
		if (num[j][i] == '1')
			flag[i][0] = 1;
		if (num[j][i] == '2')
			flag[i][1] = 1;
		if (num[j][i] == '3')
			flag[i][2] = 1;
		if (num[j][i] == '4')
			flag[i][3] = 1;
	}
}

void	random(char *a[], char num[4][4])
{
	int		flag[4][4];
	int		i;
	int		j;
	int		k;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		put_flag(num, flag, i, j);
		while (++j < 4)
		{
			k = -1;
			while (++k < 4)
			{
				if (num[j][i] == '\0' && flag[i][k] != 1 && flag[i][k] != 2)
				{
					num[j][i] = k + 49;
					flag[i][k] = 2;
				}
			}
		}
	}
	roop(a, num, flag);
}

int		main(int argc, char *argv[])
{
	char	num[4][4];
	int		i;
	int		j; 

	i = 0;
	j = argc;
	sky1_1(argv, num, i, j);
	sky1_2(argv, num, i, j);
	sky2_1(argv, num);
	sky2_2(argv, num);
	sky3(argv, num);
	sky4_1(argv, num);
	sky4_2(argv, num);
	random(argv, num);
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
