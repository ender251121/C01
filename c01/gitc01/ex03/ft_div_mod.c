/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 14:50:10 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/21 15:04:27 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = 14;
	y = 3;
	d = 0;
	m = 0;
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", d);
	printf("%d\n", m);
	ft_div_mod(x, y, &d, &m);
	printf("%d\n", x);
	printf("%d\n", y);
	printf("%d\n", d);
	printf("%d\n", m);
	return (0);
}*/
