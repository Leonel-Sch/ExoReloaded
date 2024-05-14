/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:06:09 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 17:06:17 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 0)
	nb = (nb * ft_recursive_factorial(nb - 1));
	return (nb);
}

int	main(void)
{
	printf("%d", ft_recursive_factorial(6));
	return (0);
}