/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:33:24 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 15:32:41 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int nbr;
	nbr = 0;
	ft_ft(&nbr);
	printf("le nombre est %d", nbr);
	return (0);
}