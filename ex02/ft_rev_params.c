/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvandepu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 20:57:01 by rvandepu          #+#    #+#             */
/*   Updated: 2023/07/11 21:04:33 by rvandepu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	while (argc-- > 1)
	{
		i = 0;
		while (argv[argc][i])
			i++;
		write(1, argv[argc], i);
		write(1, "\n", 1);
	}
	return (0);
}
