/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 17:11:52 by mirivera          #+#    #+#             */
/*   Updated: 2019/02/28 09:22:12 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allocate memory for result using both or one string(s),
** since you'll be joining them in that string.
** Copy string1 into the new string if there's only one,
** same with the second string
** and then strcat the two or one strings together
** to fill in the rest of result's array, then return result.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	size;

	if (s1 && s2)
		size = (size_t)(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	else if (s1)
		size = (size_t)(ft_strlen((char *)s1));
	else if (s2)
		size = (size_t)(ft_strlen((char *)s2));
	else
		return (NULL);
	if (!(result = ft_memalloc(size)))
		return (NULL);
	if (s1)
		result = ft_strcpy(result, (char *)s1);
	else
		result = ft_strcpy(result, (char *)s2);
	if (s1 && s2)
		result = ft_strcat(result, (char *)s2);
	return (result);
}
