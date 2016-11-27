/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecunniet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 17:01:24 by ecunniet          #+#    #+#             */
/*   Updated: 2016/11/16 12:17:37 by ecunniet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
		i++;
	while (j <= i)
	{
		if (s[j] == ((char)c))
			return ((char*)(s + j));
		j++;
	}
	return (NULL);
}
