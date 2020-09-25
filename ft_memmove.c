/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 12:38:46 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/21 19:20:26 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dest, void *src, int size)
{
	char	*d;
	char	*s;
	int		i;

	d = (char*)dest;
	s = (char*)src;
	if (src == dest)
		return (src);
	if (src < dest)
	{
		i = size - 1;
		while (i >= 0)
		{
			d[i] = s[i];
			i--;
		}
	}
	else
	{
		i = -1;
		while (++i < size)
			d[i] = s[i];
	}
	return ((void*)d);
}
