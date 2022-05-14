/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 11:27:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/14 17:10:11 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}

/*

#include <stdio.h>
#include <string.h>
int main (void)
{
	const char str[] = "My name is Bond... James Bond."; 
	const char chr = 'B'; 
	char *ptr;

	puts ("\n- strchr");
	ptr = strchr(str, chr);
	printf("Begins at first %c.\nThe output is:  %s\n", chr, ptr);

	puts ("\n- ft_strchr");
	ptr = ft_strchr(str, chr);
	printf("Begins at first %c.\nThe output is:  %s\n", chr, ptr);

	return 0;
}

*/