/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyll.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 18:03:42 by mlee              #+#    #+#             */
/*   Updated: 2020/02/01 20:01:10 by mlee             ###   ########.fr       */
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
					if (num[q - 1][j] < num[q][j])
					{
						count = count + 1;
						q++;
					}
				}
			}
			if (i >= 9 && i <= 12)
			{
				q = 0;
				while (q <= 2)
				{
					if (num[j][q - 1] < num[j][q])
					{
						count = count + 1;
						q++;
					}
				}
			}
			if (i >= 5 && i <= 8)
			{
				q = 3;
				while (q >= 1)
				{
					if (num[q][j] < num[q - 1][j])
					{
						count = count + 1;
						q++;
					}
				}
			}
			if (i >= 13 && i <= 16)
			{
				q = 3;
				while (q >= 1)
				{
					if (num[j][q] < num[j][q -  1])
					{
						count = count + 1;
						q++;
					}
				}
			}
			j++;
		}
		i++;
	}
}
