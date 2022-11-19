/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaubry <eaubry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 19:53:01 by eaubry            #+#    #+#             */
/*   Updated: 2022/11/18 16:13:28 by eaubry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	i = 0;
	dest_len = strlen(dest);
	src_len = strlen(src);
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[i] && (i + dest_len) < (size - 1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

// int main (void)
// {
//     char    str[] = "bonjour";
//     char    str2[] = "hello world";
//     int    i;
//     int    j;
//     char    str3[] = "bonjour";
//     char    str4[] = "hello world";

//     i = ft_strlcat(str, str2, 7);
//     j = strlcat(str3, str4, 7);
//     printf("%s\n", str);
//     printf("%d\n", i);
//     printf("%s\n", str3);
//     printf("%d\n", j);
//     return (0);
// }
