/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:54:50 by melee             #+#    #+#             */
/*   Updated: 2023/05/02 17:16:01 by melee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_digit(int n)
{
	int	digit;
	
	digit = 0;
	if (n < 0) 
		digit++;
	while (n != 0)
	{
		n /= 10;
		digit++;
	}
	return (digit);

}

static void	recursive(char *result, int n)
{
	if (n < 0)
	{
		n = -n;
		*result = '-';
		result++;
	}
	if (n >= 10)
	{
		printf("here");
		recursive(result, n / 10);
		recursive(result, n % 10);
	}
	else
	{
		printf("there %s\n",result);
		result++;
		*result = n + 48;
	}

}

char	*ft_itoa(int n)
{
	char	*result;
	char	*max_negative;
	
	max_negative = "-2147483648";
	result = malloc((get_digit(n) + 1) * sizeof(char));
	if (n == -2147483648)
	{
		return (max_negative);
	}
	recursive(result, n);
	//printf("%d\n", get_digit(n));
	return (result);
}

#include <stdio.h>

int	main(void)
{
	int	n = -123;

	printf("%s\n",ft_itoa(n));
	return (0);
}
