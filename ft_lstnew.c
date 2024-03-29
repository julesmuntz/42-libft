/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 15:03:05 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 17:16:48 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*var;

	var = malloc(sizeof(t_list));
	if (var == NULL)
		return (NULL);
	var->content = content;
	var->next = NULL;
	return (var);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	t_list *str;
	if (arc == 2)
	{
		str = ft_lstnew(arv[1]);
		printf("%s\n", (char *)str->content);
	}
}

*/