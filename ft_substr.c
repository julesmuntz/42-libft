/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:19:09 by julmuntz          #+#    #+#             */
/*   Updated: 2022/06/02 22:17:57 by julmuntz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*str;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s) - start;
	if (len > size)
		str = (char *)malloc(sizeof(char) * (size + 1));
	else
		str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < len && start < ft_strlen(s))
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}

/*

#include <stdio.h>
int	main(void)
{
	char	*src;
	char	*dst;
	int		chr;
	int		len;

	src = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	chr = 11;
	len = 16;
	dst = ft_substr(src, chr, len);
	printf("%s\n", dst);
	free(dst);
	return (0);
}

*/