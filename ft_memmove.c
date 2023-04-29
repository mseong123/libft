/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:56:41 by melee             #+#    #+#             */
/*   Updated: 2023/04/29 14:26:12 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dst_char;
	char	*src_char;
	size_t	i;

	i = 0;
	dst_char = (char *)dst;
	src_char = (char *)src;
	while ((dst || src) && i < len)
	{
		dst_char[i] = src_char[i];
		i++;
	}
	return (dst);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char src[]="foo-bar";
	//char dst[] = "goodbye";
	memcpy(&src[4], &src[4], 4);
//	ft_memmove(&src[3], &src[4], 4);
	printf("%s",src);
	return (0);
}

