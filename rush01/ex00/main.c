/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hko <hko@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 18:15:28 by junhpark          #+#    #+#             */
/*   Updated: 2020/02/02 22:52:23 by hko              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sky1_1(char *a[], char num[4][4], int i, int j);
void	sky1_2(char *a[], char num[4][4], int i, int j);
void	sky2_1(char *a[], char num[4][4]);
void	sky2_2(char *a[], char num[4][4]);
void	sky3(char *a[], char num[4][4]);
void	sky4_1(char *a[], char num[4][4]);
void	sky4_2(char *a[], char num[4][4]);
void	mk_swap(char num[4][4], int i, int a, int b);
void	swap(char num[4][4], int flag[4][4], int i, int j);
void	zero(int in[4]);
void	zero_1(int count[4][4]);
void	same_1(char num[4][4], int count[4][4], int i, int j);
int		same(char num[4][4]);
int		logic_1(char num[4][4], char *a[], int i);
int		logic_2(char num[4][4], char *a[], int i);
int		logic_3(char num[4][4], char *a[], int i);
int		logic_4(char num[4][4], char *a[], int i);
int		logic(char num[4][4], char *a[], int i, int count);
int		inspect(char num[4][4], char *a[]);
void	roop(char *a[], char num[4][4], int flag[4][4]);
void	put_flag(char num[4][4], int flag[4][4], int i, int j);
void	random(char *a[], char num[4][4]);
void	print(char num[4][4]);

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
}
