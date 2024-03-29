/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 14:29:17 by julmuntz          #+#    #+#             */
/*   Updated: 2022/05/20 17:17:07 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nbr, size_t size)
{
	void	*ptr;

	if (size != 0 && nbr > SIZE_MAX / size)
		return (NULL);
	ptr = malloc(nbr * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * nbr);
	return (ptr);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	int		nbr;
	int		*ptr;
	if (arc == 2)
	{
		nbr = arv[1][0];
		
		puts("\n- calloc");
		ptr = calloc(nbr, sizeof(int));
		printf("'%ls'\n", ptr);
		free(ptr);

		puts("\n- ft_calloc");
		ptr = ft_calloc(nbr, sizeof(int));
		printf("'%ls'\n", ptr);
		free(ptr);
	}
}

*/