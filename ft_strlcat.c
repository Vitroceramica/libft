/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/14 18:10:18 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/15 01:47:19 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlcat(char *dst, char *src, int size)
{
	int i;
	int j;
	int lend;

	i = 0;
	j = 0;
	lend = ft_strlen(dst);

	while (i < lend)
		i++;
	while (src[j] != '\0' && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
		return (size > lend) ? lend + ft_strlen(src) : size + ft_strlen(src);
}

