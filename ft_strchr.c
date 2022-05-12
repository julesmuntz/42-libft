/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_strchr.c                                      :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/12 11:27:29 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 17:19:57 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != (char)c)
		i++;
	return ((char *)s + i);
}

/*

#include <stdio.h>
#include <string.h>
int main (void)
{
	puts ("\n- strchr");
	const char strOG[] = "My name is Bond... James Bond."; 
	const char chrOG = 'B'; 
	char *ptrOG;
	ptrOG = strchr(strOG, chrOG);
	printf("Begins at first %c.\nThe output is:  %s\n", chrOG, ptrOG);
	
	puts ("\n- ft_strchr");
	const char strFT[] = "My name is Bond... James Bond."; 
	const char chrFT = 'B'; 
	char *ptrFT;
	ptrFT = ft_strchr(strFT, chrFT);
	printf("Begins at first %c.\nThe output is:  %s\n", chrFT, ptrFT);
	
	return 0;
}

*/