/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/10 16:58:53 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/10 20:13:35 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp (void *str1 ,void *str2, int n)
{	
	unsigned	int a;
	unsigned	int i;
	char *s1;
	char *s2;

	i = 0;
	a = (unsigned int)n;
	s1 = (char*)str1;
	s2 = (char*)str2;

	if(n == 0)
		return (0);
	while (s1[i] == s2[i] && i < a - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
