/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 10:20:43 by tviejo            #+#    #+#             */
/*   Updated: 2024/03/26 11:37:18 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int nb)
{
	if ((65 <= nb && nb <= 87)
		|| (97 <= nb && nb <= 122)
		|| (48 <= nb && nb <= 57))
		return (nb);
	return (0);
}
/*
#include <ctype.h>
#include <stdio.h>
int	main(void)
{
	printf("%d\n",ft_isalnum(50));
	printf("%d",isalnum(50));
}
*/