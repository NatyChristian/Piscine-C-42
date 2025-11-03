/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmbolana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 15:48:53 by jmbolana          #+#    #+#             */
/*   Updated: 2025/11/02 16:10:54 by jmbolana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void);

void	comp(char i, char j);

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = '0';
	while (i <= '9')
	{
		j = '0';
		while (j <= '8')
		{
			comp(i, j);
			j++;
		}
		i++;
	}
}

void	comp(char i, char j)
{
	char	k;
	char	l;

	k = '0';
	while (k <= '9')
	{
		l = i + 1;
		while (l <= '9')
		{
			write(1, &i, 1);
			write(1, &j, 1);
			write(1, " ", 1);
			write(1, &k, 1);
			write(1, &l, 1);
			if (!(i == '9' && j == '8'
					&& k == '9' && l == '9'))
				write(1, ", ", 2);
			l++;
		}
		k++;
	}
}
