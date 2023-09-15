/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 15:11:38 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/21 15:41:17 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	m;

	d = *a / *b;
	m = *a % *b;
	*a = d;
	*b = m;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 14;
	y = 3;
	printf("%d\n", x);
	printf("%d\n", y);
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/
