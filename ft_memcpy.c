/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:25:28 by melee             #+#    #+#             */
/*   Updated: 2023/04/29 13:42:13 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 14:04:59 by melee             #+#    #+#             */
/*   Updated: 2023/04/28 15:20:38 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst_char;
	char	*src_char;
	size_t	i;

	i = 0;
	dst_char = (char *)dst;
	src_char = (char *)src;
	while ((dst || src) && i < n)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[]="hello";
	char dst[] = "goodbye";
	ft_memcpy(dst, src, sizeof(char));
	//memcpy(NULL, NULL, sizeof(char));
	printf("%s",dst);
	return (0);
}
*/
