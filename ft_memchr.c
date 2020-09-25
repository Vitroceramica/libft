/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/29 16:24:56 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/10 20:12:42 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(void *str, int c, int n)
{
	int i;
	unsigned char *s;
	unsigned char c1;

	c1 = (unsigned char)c;
	s = (unsigned char*)str;
	i = 0;
	while (s[i] != c1 && i < n - 1)
	{
		i++;
	}
	if (s[i] == c1)
		return (s + i);
	return (0);
}
