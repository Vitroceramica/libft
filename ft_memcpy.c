/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/08 13:55:07 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/10 19:04:17 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dest, void * src, int size)
{
	int i;
	char *d;
	char *s;

	i = 0;
	d = (char*)dest;
	s = (char*)src;
    if (dest == src)
        return (0);
	while(i < size)
	{
		d[i] = s[i];
		i++;
	}
	return ((void*)d);
}
