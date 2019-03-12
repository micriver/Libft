/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 18:53:41 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/12 11:40:01 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Return the first word in a given string
*/

char	*ft_first_word(char *str)
{
	unsigned int		i;
	unsigned int		len;
	unsigned int		start;
	char				*firstword;

	i = 0;
	start = 0;
	len = 0;
	if (str != '\0')
	{
		while (ft_isspace(str[i++]))
			start = i;
		while (!(ft_isspace(str[i++]) && str[i++] != '\0'))
			len++;
	}
	firstword = (char *)malloc(sizeof(char) * (len + 1));
	i = 0;
	while (str[start] != '\0' && (!(ft_isspace(str[start]))))
		firstword[i++] = str[start++];
	firstword[i] = '\0';
	return (firstword);
}
