/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:55:17 by hko               #+#    #+#             */
/*   Updated: 2020/02/02 22:52:41 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	zero_1(int count[4][4]);
void	zero(int in[4]);
void	mk_swap(char num[4][4], int i, int a, int b);
void	swap(char num[4][4], int flag[4][4], int i, int j);
void	same_1(char num[4][4], int count[4][4], int i, int j);
int		same(char num[4][4]);
int		logic_1(char num[4][4], char *a[], int i);
int		logic_2(char num[4][4], char *a[], int i);
int		logic_3(char num[4][4], char *a[], int i);
int		logic_4(char num[4][4], char *a[], int i);
int		logic(char num[4][4], char *a[], int i, int count);

void	print(char num[4][4])
{
	int i;
	int j;

	i = 0;
	while (i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			write(1, &num[i][j], 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
		i++;
	}
}

int		inspect(char num[4][4], char *a[])
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (same(num) == 1 && logic(num, a, i, count) == 1)
	{
		print(num);
		return (1);
	}
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
	write(1, "Error\n", 6);
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
