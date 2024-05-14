/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:39:01 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 15:44:00 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a/b;
	*mod = a%b;
}
int	main(void)
{
	int a;
	int b;
	int	div;
	int mod;
	a = 56;
	b = 11;
	printf("les nombre sont %d puis %d\n", div, mod);
	ft_div_mod(a, b, &div, &mod);
	printf("les nombre sont %d puis %d", div, mod);
	return (0);
}