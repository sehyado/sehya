/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 15:32:19 by mlee              #+#    #+#             */
/*   Updated: 2020/01/30 16:27:16 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_alpha(char c)
{
	if (!((c >= 'a' && c <= 'z') ||(c >= 'A' && c <= 'Z') \
				|| (c >= '0' && c <= '9')))
		return (0);
	return (1);
}

void	ft_lowalpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}	

void	ft_upalpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int q;

	i = 0;
	q = 1;
	while (str[i])
	{
		if (ft_alpha(str[i]) == 0)
			q = 1;
		if ((q == 1) && (ft_lower(str[i]) == 1))
		{
			str[i] = str[i] - 32;
			q = 0;
		}
		if ((q != 1) && (ft_upalpha(str[i]) == 1))
			str[i] = str[i] + 32;
		if (ft_upalpha(str[i]) == 1)
			q = 1;
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
