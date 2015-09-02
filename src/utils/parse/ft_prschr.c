/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prschr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/03 19:16:44 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:14:27 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_prschr(char **cursor, char c)
{
	unsigned int	n;
	char			*lcursor;

	n = 0;
	if (cursor && (lcursor = *cursor) && c)
	{
		while (*lcursor == c)
		{
			lcursor++;
			n++;
		}
		*cursor = lcursor;
	}
	return (n);
}
