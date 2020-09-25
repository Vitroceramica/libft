/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:09:58 by antonmar          #+#    #+#             */
/*   Updated: 2020/08/11 15:40:12 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memccpy(void *dest, void * src, int c, int size)
{
	int i;
	unsigned char *d;
	unsigned char *s;

	i = 0;
	d = (unsigned char*)dest;
	s = (unsigned char*)src;
	while(i < size)
	{
		d[i] = s[i];
        if(d[i] == (unsigned char)c)
            return(&d[i + 1]);
		i++;
	}
    return (0);
}
