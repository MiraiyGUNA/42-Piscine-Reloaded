/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-maga <vde-maga@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:32:25 by vde-maga          #+#    #+#             */
/*   Updated: 2025/04/02 18:51:02 by vde-maga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	sort_strings(char *strings[], int count)
{
	int	swapped;
	int	n;
	int	i;

	swapped = 1;
	n = count;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < n - 1)
		{
			if (ft_strcmp(strings[i], strings[i + 1]) > 0)
			{
				ft_swap(&strings[i], &strings[i + 1]);
				swapped = 1;
			}
			i++;
		}
		n--;
	}
}

void	print_strings(char *strings[], int count)
{
	int	i;
	int	j;

	i = 0;
	while (i < count)
	{
		j = 0;
		while (strings[i][j])
		{
			ft_putchar(strings[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		sort_strings(argv + 1, argc - 1);
		print_strings(argv + 1, argc - 1);
	}
	return (0);
}
