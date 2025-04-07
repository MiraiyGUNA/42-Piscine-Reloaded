/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 16:20:51 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/01 16:23:18 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	v1 = 42;
	int	v2 = 24;
	int	*a = &v1;
	int	*b = &v2;

	printf("Antes de Chamar a Funcao\n");
	printf("Valor A: %d\n", *a);
	printf("Valor B: %d\n", *b);
	printf("\n");
	ft_swap(a,b);
	printf("Depois de Chamar a Funcao\n");
	printf("Valor A: %d\n", *a);
	printf("Valor B: %d\n", *b);
	return (0);
}
*/
