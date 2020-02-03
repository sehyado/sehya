/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sky4.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:50:10 by hko               #+#    #+#             */
/*   Updated: 2020/02/02 22:39:22 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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