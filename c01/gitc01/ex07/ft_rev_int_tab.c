/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 16:58:59 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/21 19:55:11 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	arr;

	a = size -1;
	b = 0;
	while (b < a)
	{
		arr = tab[b];
		tab[b] = tab [a];
		tab[a] = arr;
		b++;
		a--;
	}
}

/*int	main(void)
{
	int	x[5] = {1, 2, 3, 4, 5};
	int	size;
	int	y;

	size = 5;
	y = 0;
	while (y < size)
	{
		printf("%d", x[y]);
		y++;
	}
	ft_rev_int_tab(x, size);
	printf("\n");
	y = 0;
	while (y < size)
	{
		printf("%d", x[y]);
		y++;
	}
	return (0);
}*/
