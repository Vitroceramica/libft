/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 17:40:42 by antonmar          #+#    #+#             */
/*   Updated: 2020/08/13 23:17:52 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
    long res;
    long simb;

	res = 0;
	i = 0;
	simb = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' 
	|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
		{
			if (str[i] == '-')
				simb = -1;
			i++;
		}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res * simb > 2147483648)
        	return (-1);
		else if (res * simb < -2147483648)
        	return (0);
	res = str[i] - 48 + res * 10;
	i++;
	}
    res *= simb;
	return (res);
}

