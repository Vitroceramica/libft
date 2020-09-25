/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 12:09:12 by antonmar          #+#    #+#             */
/*   Updated: 2020/08/11 15:14:07 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//no funciona, revisar
char	*ft_strrchr(char *str, int c)
{
    char *s;
    
    s = (char *)str;
    while(*s)
    {
        s++;
    }
    if (c == '\0')
        return ((char*)s);
	while (s >= str)
	{
        if(c == *s)
            return ((char*)s);
        s--;
	}
	return (0);
}
