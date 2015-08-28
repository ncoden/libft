/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 11:15:51 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:13:39 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_power(int nbr, int power)
{
	int		result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nbr;
		power--;
	}
	return (result);
}
