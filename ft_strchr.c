/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 07:45:14 by melee             #+#    #+#             */
/*   Updated: 2023/05/01 08:28:54 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	d;

	str = (char *)s;
	d = (char)(c);
	while (*str != '\0')
	{
		if (*str == d)
			return (str);
		str++;
	}
	if (d == '\0')
		return (str);
	else
		return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "hello";
	char c = '\0';
	char *result;

	result = strchr(str, c);
	//result = ft_strchr(str, c);
	printf("%s\n", result);
	return (0);
}
*/
