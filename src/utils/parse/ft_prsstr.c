/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prsstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncoden <ncoden@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 17:51:27 by ncoden            #+#    #+#             */
/*   Updated: 2015/08/28 23:16:43 by ncoden           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_prsstr(char **cursor, const char *str)
{
	int		i;
	char	*lcursor;

	if (str && cursor && (lcursor = *cursor))
	{
		i = 0;
		while (lcursor[i] == str[i] && str[i] != '\0')
			i++;
		if (str[i] == '\0')
		{
			*cursor = &lcursor[i];
			return (i);
		}
	}
	return (0);
}
