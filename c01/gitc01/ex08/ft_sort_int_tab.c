/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enalvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 19:58:21 by enalvare          #+#    #+#             */
/*   Updated: 2023/08/21 21:04:34 by enalvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size -1)
	{
		b = 0;
		while (b < size -1)
		{
			if (tab[b] > tab[b + 1])
			{
				temp = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = temp;
			}
			b++;
		}
		a++;
	}
}

/*int main(void)
{
	int	x;
	int size;
	int s[] = {5, 9, 3, 1};

	x = 0;
	size = 4;
	while (x < size)
	{
		printf("%d", s[x]);
		x++;
	}
	ft_sort_int_tab(s, size);
	printf("\n");
	x = 0;
	while (x < size)
	{
		printf("%d", s[x]);
		x++;
	}
	return (0);
}*/
