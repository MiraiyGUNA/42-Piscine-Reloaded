/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:32:15 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/04 14:27:47 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int				i;
	unsigned int	res;

	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		++i;
	}
	return (res);
}
