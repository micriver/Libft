/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 17:17:54 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/07 17:21:27 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rot13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'm') ||
				(str[i] >= 'A' && str[i] <= 'M'))
			str[i] += 13;
		else if ((str[i] >= 'n' && str[i] <= 'z') ||
				(str[i] >= 'N' && str[i] <= 'Z'))
			str[i] -= 13;
		i++;
	}
}
