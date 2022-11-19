/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 14:25:14 by eaubry            #+#    #+#             */
/*   Updated: 2022/11/16 19:05:43 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	nb;

	i = 0;
	count = 0;
	nb = 0;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count = 1;
		i++;
	}
	while (48 <= str[i] && str[i] <= 57)
	{
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (count == 1)
		nb *= -1;
	return (nb);
}

// int main(void)
// {
// 	char *s = "+548";
// 	printf("%d", ft_atoi(s));
// 	return (0);
// }
