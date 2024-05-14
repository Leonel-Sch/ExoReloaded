/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lscheupl <lscheupl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 16:40:32 by lscheupl          #+#    #+#             */
/*   Updated: 2024/05/14 17:14:40 by lscheupl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	value;

	value = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (value * value <= nb)
	{
		if (value * value == nb)
			return (value);
		value++;
	}
	return (0);
}
int	main(void)
{
	printf("value is %d", ft_sqrt(878));
	return (0);
}