/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 19:42:08 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/21 20:01:20 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(int nitems, int size)
{
	void	*pointer;
	int i;

	i = 0;
	pointer = malloc(nitems * size);
	if (pointer == NULL)
		return (NULL);
	while (i < nitems * size)
	{
		((char *)pointer)[i] = '\0';
		i++;
	}
	return (pointer);
}
