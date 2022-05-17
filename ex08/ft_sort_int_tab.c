/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrabby <yrabby@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 10:25:11 by yrabby            #+#    #+#             */
/*   Updated: 2022/05/17 11:07:24 by yrabby           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	mark;
	int	i;

	if (!tab || !size)
		return ;
	mark = 1;
	while (mark < size)
	{
		i = mark - 1;
		while (i >= 0 && tab[i] > tab[i + 1])
		{
			swap(tab + i, tab + i + 1);
			--i;
		}
		++mark;
	}
}
