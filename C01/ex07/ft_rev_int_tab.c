/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 15:07:08 by jmbolana          #+#    #+#             */
/*   Updated: 2025/11/05 15:10:37 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp[2000];
	int	i;

	i = 0;
	while (i < size)
	{
		temp[i] = tab[size - i - 1];
		i++;
	}
	i = 0;
	while (i < size)
	{
		tab[i] = temp[i];
		i++;
	}
}
