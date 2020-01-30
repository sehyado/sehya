/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:32:19 by mlee              #+#    #+#             */
/*   Updated: 2020/01/30 16:17:00 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_alpha(char c)
{
	int q;

	if (!((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') \
				|| (c >= '0' && c <= '9')))
		q = 1;
	q = 0;
}

void	ft_lowalpha(char c)
{
	int q;

	if ((q == 1) && (c >= 'a' && c <= 'z'))
	{
		c = c - 32;
		q = 0;
	}
}	

void	ft_upalpha(char c)
{
	int q;

	if ((q != 1) && (c >= 'A' && c <= 'Z'))
		c = c + 32;
}

void	ft_check(char c)
{
	int q;

	if (c >= 'A' && c <= 'Z')
		q = 0;
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int q;

	i = 0;
	q = 1;
	while (str[i])
	{
		ft_alpha(str[i]);
		ft_lowalpha(str[i]);
		ft_upalpha(str[i]);
		ft_check(str[i]);
		i++;
	}
	return (str);
}

int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return 0;
}
