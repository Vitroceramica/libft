/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antonmar <antonmar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/10 19:07:45 by antonmar          #+#    #+#             */
/*   Updated: 2020/08/10 19:11:48 by antonmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 int	ft_isdigit(int c)
 {
	 if (c >= 48 && c <= 57)
		{
			return (1);
		}
	return (0);
 }
