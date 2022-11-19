/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:40:21 by eaubry            #+#    #+#             */
/*   Updated: 2022/11/15 20:39:02 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//recopi la memoir de la source dans la dest
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int		i;
	char	*src_tmp;
	char	*dest_tmp;

	src_tmp = (char *)src;
	dest_tmp = (char *)dest;
	i = 0;
	while (i < n)
	{
		dest_tmp[i] = src_tmp[i];
		i++;
	}
	return (dest);
}
