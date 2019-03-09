/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_first_word_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 19:22:06 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/07 19:24:31 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main (void)
{
	char s1[] = "This is a test of the first word.";

	printf("%s\n", s1);
	ft_first_word(s1);
	printf("This is the first word: %s\n", s1);
	return (0);
}
