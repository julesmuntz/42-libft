/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 22:17:55 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 22:16:31 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;

	if (str == NULL)
		return (NULL);
	start = 0;
	while (ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (ft_strrchr(set, str[end]))
		end--;
	return (ft_substr(str, start, end - start + 1));
}

/*

#include <stdio.h>
int main(int arc, char **arv)
{
	char	*str;
	if (arc == 3)
	{
		str = ft_strtrim(arv[1], arv[2]);
		printf("%s\n", str);
	}
}

*/