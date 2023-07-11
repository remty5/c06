/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 21:07:30 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 21:27:27 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else if (s1[i] < s2[i])
			return (-1);
		else if (s1[i] > s2[i])
			return (1);
	}
	if (s1[i])
		return (1);
	else if (s2[i])
		return (-1);
	else
		return (0);
}

void	ft_sort_str_tab(char *tab[], int size, int start)
{
	int		i;
	int		j;
	int		m;
	char	*t;

	i = start;
	while (i < size)
	{
		j = i;
		m = i;
		while (j < size)
			if (ft_strcmp(tab[j++], tab[m]) < 0)
				m = j - 1;
		t = tab[i];
		tab[i] = tab[m];
		tab[m] = t;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	ft_sort_str_tab(argv, argc, 1);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		write(1, argv[i], j);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
