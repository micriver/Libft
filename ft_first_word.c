/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 19:17:10 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/07 21:30:06 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main (void)
{
	char s1[] = "This is a test of the first word.";

	printf("%s\n", s1);
	printf("%s\n", ft_first_word(s1));
	//printf("This is the first word: %s\n", s1);
	return (0);
}
