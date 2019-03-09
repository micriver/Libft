/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotone_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 18:56:22 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/07 19:04:59 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main (void)
{
	char s1[] = "abc";

	printf("This is before rotone: %s\n", s1);
	ft_rotone(s1);
	printf("This is before rotone: %s\n", s1);
	return (0);
}
