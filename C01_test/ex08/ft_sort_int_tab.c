/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taehykim <taehykim@student.42seoul.kr      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 14:51:37 by taehykim          #+#    #+#             */
/*   Updated: 2021/09/13 15:11:53 by taehykim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	int	tab[6];
	int	i;

	i = 0;
	tab[0] = 1;
	tab[1] = 6;
	tab[2] = 4;
	tab[3] = 8;
	tab[4] = 3;
	tab[5] = 2;
	ft_sort_int_tab(tab, 6);
	while (i < 6)
	{
		printf("%d", tab[i]);
		i++;
	}
}
