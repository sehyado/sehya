/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 20:38:03 by mlee              #+#    #+#             */
/*   Updated: 2020/01/30 21:18:30 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int main()
{
	char a[100] = "hello, my world";
	char b[] = "hello, my world worl";
	printf("%d\n",ft_strcmp(a, b));
	printf("%d\n", strcmp(a, b));
}
/*
	*s1 - *s2 
		*s1 > *s2	1
		*s1 = *s2	0
		*s1 < *s2	-1

		*s1 - *s2 < 0	// s2 가 더큼
		*s1 - *s2 = 0	// 서로같음
		*s1 - *s2 >= 0 	// s1이 더큼

		return (*s1 - *s2)
		*/
