/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geolee <geoloee @student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:43:17 by geolee            #+#    #+#             */
/*   Updated: 2021/10/26 18:49:48 by geolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_interative_power(int nb, int power)
{
	int	i;
	int	m;

	m = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		while (i < power)
		{	
			m *= nb;
			power--;
		}
	return (m);
}
