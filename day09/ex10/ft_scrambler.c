/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rariosa- <rariosa-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/18 11:26:10 by rariosa-          #+#    #+#             */
/*   Updated: 2017/08/18 12:08:23 by rariosa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int x;
	int y;
	int z;
	int n;

	x = ***a;
	y = *b;
	z = *******c;
	n = ****d;
	***a = y;
	*b = n;
	*******c = x;
	****d = z;
}
