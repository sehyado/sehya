/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:53:37 by hko               #+#    #+#             */
/*   Updated: 2020/02/02 21:53:43 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
