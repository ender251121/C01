/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:46:12 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/18 14:21:45 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 5;
	y = 8;

	printf("%d\n", x);
	printf("%d\n", y);
	ft_swap(&x, &y);
	printf("%d\n", x);
	printf("%d\n", y);
	return (0);
}*/
