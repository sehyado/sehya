/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 21:51:47 by hko               #+#    #+#             */
/*   Updated: 2020/02/02 21:51:50 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
