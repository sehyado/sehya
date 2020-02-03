/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   same.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:52:48 by hko               #+#    #+#             */
/*   Updated: 2020/02/02 22:32:16 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	zero(int in[4]);
void	zero_1(int count[4][4]);

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
