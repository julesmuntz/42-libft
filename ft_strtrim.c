/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strtrim.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/21 22:17:55 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/06/02 12:55:48 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	long int	start;
	long int	end;

	start = 0;
	if (str == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(str));
	while (str[start] && ft_strchr(set, str[start]))
		start++;
	end = ft_strlen(str);
	while (ft_strchr(set, str[end]))
		end--;
	if (ft_substr(str, start, end - start + 1) == NULL)
		return (NULL);
	return (ft_substr(str, start, end - start + 1));
}
