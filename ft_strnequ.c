/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 11:37:50 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/08 21:09:34 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This function is a lexigraphical comparison
** of two strings until n is reached. I'm calling strncmp
** to do the majority of the work
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if (s1 && s2)
	{
		if (!(ft_strncmp(s1, s2, n)))
			return (1);
	}
	return (0);
}
