/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:16:47 by antonmar          #+#    #+#             */
/*   Updated: 2020/08/10 19:24:54 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int c)
{
		if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))
		|| ((c >= 48) && (c <= 57)))
		{
			return (1);
		}
	return (0);
}
