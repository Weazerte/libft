/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:37:02 by eaubry            #+#    #+#             */
/*   Updated: 2022/11/15 19:29:27 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ecrase les donnes a une memoire donnee

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, int n)
{
	char	*m;

	m = ((char *)s);
	while (n--)
	{
		*m = 0;
		m++;
	}
}

// int	main()
// {
// 	char	t[] = "0123456789";

// 	ft_bzero(t, sizeof(t));
// 	printf("%s\n", t);
// 	bzero(t, sizeof(t));
// 	printf("%s\n", t);
// 	return (0);
// }
