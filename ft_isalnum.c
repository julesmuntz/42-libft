/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   ::::::::   */
/*   ft_isalnum.c                                     :+:    :+: :+:    :+:   */
/*                                                          +:+       +:+     */
/*   By: julmuntz <julmuntz@student.42.fr>              +#++:      +#+        */
/*                                                        +#+   +#+           */
/*   Created: 2022/05/04 11:58:11 by julmuntz     #+#    #+#  #+#             */
/*   Updated: 2022/05/12 16:21:43 by julmuntz     ########  ########+10       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

/*

#include <stdio.h>
int	main(int arc, char **arv)
{
	int	alnum;

	if (arc == 2)
	{
		alnum = arv[1][0];
		printf("%d\n", ft_isalnum(alnum));
	}
}

*/
