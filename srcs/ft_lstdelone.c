/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mirivera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 16:16:01 by mirivera          #+#    #+#             */
/*   Updated: 2019/03/04 18:04:28 by mirivera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Takes as a parameter a link’s pointer address and frees the
** memory of the link’s content using the function del given as
** a parameter, then frees the link’s memory using free(3).
*/

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
