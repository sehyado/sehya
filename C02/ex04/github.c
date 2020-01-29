/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   github.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:14:01 by mlee              #+#    #+#             */
/*   Updated: 2020/01/28 16:15:24 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_lowercase(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	return (0);
}

int ft_str_is_lowercase(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		if (!(iss_lowercase(str[i])))
			return (0);
		i++;
	}
	return (1);
}