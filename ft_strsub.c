/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 12:25:23 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/08 21:12:11 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Create a new substring from the string passed
** and print starting from the start index of the string passed
** Don't use ft_strlen for the new string, just use the len given
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substring;

	i = 0;
	substring = (char *)malloc((len + 1) * sizeof(char));
	if (substring && s)
	{
		while (i < len)
		{
			substring[i] = s[start];
			i++;
			start++;
		}
		substring[i] = '\0';
		return (substring);
	}
	return (NULL);
}
