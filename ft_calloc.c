/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:32:59 by eaubry            #+#    #+#             */
/*   Updated: 2022/11/16 20:28:33 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;

	if ((nmemb == 0) || (size > (SIZE_MAX / nmemb)))
		return (NULL);
	str = malloc(nmemb * size);
	if (!str)
		return (NULL);
	bzero(str, nmemb * size);
	return (str);
}
