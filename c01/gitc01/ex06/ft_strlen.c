/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:20:36 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/21 16:55:47 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	cant;

	cant = 0;
	while (*str != '\0')
	{
		cant++;
		str++;
	}
	return (cant);
}

/*int	main(void)
{
	char	*a;
	int		s;

	a = "welcome";
	s = ft_strlen(a);
	printf("%d\n", s);
	return (s);
}*/
