/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   github.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 16:23:47 by mlee              #+#    #+#             */
/*   Updated: 2020/01/28 16:25:48 by mlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_printable(char c)
{
	if ((c >= 32) && (c <= 126))
		return (1);
	return (0);
}

int		ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!(iss_printable(str[i])))
			return (0);
		i++;
	}
	return (1);
}
