/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:05:16 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/02 16:51:39 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	str[] = "Parannoul";
	printf("String Printada da Main\n");
	printf("%s\n", str);
	printf("\n");
	printf("String Printada pela Minha Funcao: \n");
	ft_putstr(str);
	return (0);
}
*/
