/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spipitku <spipitku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 07:55:53 by spipitku          #+#    #+#             */
/*   Updated: 2023/09/03 20:05:36 by spipitku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !(*f))
		return ;
	while (*s)
	{
		f(i, s);
		i++;
		s++;
	}
}

/*
#include <stdio.h>
int	main()
{
	char	*s = malloc(3);

	s[0] = 'H';
	s[1] = 'e';
	s[2] = '\0';
	ft_striteri(s, test);
	printf("%s\n",s);
}*/

// LoReM iPsUm
// lOeEm IpSuM
