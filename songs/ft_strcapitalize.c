/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 17:52:14 by mlee              #+#    #+#             */
/*   Updated: 2020/01/29 17:58:52 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int q;

	i = 0;
	q = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64) \
				|| (str[i] >= 91 && str[i] <= 96) \
				|| (str[i] >= 123 && str[i] <= 126))
			q = 1;
		else if ((q == 1) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			q = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			q = 0;
		else if ((q != 1) && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] = str[i] + 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			q = 0;
		i++;
	}
	return (str);
}
