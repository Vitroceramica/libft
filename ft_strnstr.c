/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 13:10:47 by antonmar          #+#    #+#             */
/*   Updated: 2020/09/21 20:09:05 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *s, int len)
{
	int i;
	int j;
	
	j = 0;
	i = 0;
	if (*s == '\0')
		return (str);
	while (i < len && str[i] != '\0')
	{
		j = 0;
		while(str[i] == s[j] && j < len)
		{
			j++;
		}
		i++;
		if (j == ft_strlen(s))
			return (str + i -1); 
	}
	return (0);
}

