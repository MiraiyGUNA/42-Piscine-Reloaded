/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:27:12 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/01 16:29:45 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 10;
	int	b = 5;
	int	div;
	int	mod;

	ft_div_mod(a, b, &div, &mod);
	printf("Valor de A = %d \nValor de B = %d", a, b);
	printf("\n");
	printf("Divisao = %d\n", div);
	printf("Resto = %d\n", mod);
	return (0);
}
*/
