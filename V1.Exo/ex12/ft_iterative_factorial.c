/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:45:09 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 16:01:50 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	cache;

	cache = nb - 1;
	if (nb <= 0)
		return (0);
	while (cache >= 1)
	{
		nb = nb * cache;
		cache--;
	}
	return (nb);
}
int	main(int argc, char **argv)
{
	printf("le resultat est %d", ft_iterative_factorial(-1));
	return (0);
}