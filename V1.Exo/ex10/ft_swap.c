/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:32:46 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 15:38:21 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int a;
	int b;
	a = 0;
	b = 1000;
	printf("les nombre sont %d puis %d\n", a, b);
	ft_swap(&a, &b);
	printf("les nombre sont %d puis %d", a, b);
	return (0);
}