/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:52:44 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/01 17:54:14 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;
	int		lenght;

	lenght = 0;
	while (src[lenght] != '\0')
	{
		lenght++;
	}
	dest = (char *) malloc(sizeof(char) * (lenght + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < lenght)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src = "Deadlock";

	printf("A minha funcao: %s\n", ft_strdup(src));
	printf("Funcao Original: %s\n", strdup(src));
}
*/
