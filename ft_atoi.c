/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe < moabe@student.42tokyo.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 07:26:07 by moabe             #+#    #+#             */
/*   Updated: 2025/05/02 08:42:33 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	unsigned long	num;
	int				sign;

	num = 0;
	sign = 1;
	while (*str == ' ') 
		str++;
	if (*str == '-' || *str == '+')
		sign = 1 - ((*str++ == '-') << 1);
	while (*str >= '0' && *str <= '9')
	{
		// if (sign == 1 && (num > 922337203685477580ul
		// 		|| (num == 922337203685477580ul && (*str - '0') > 7))) //LONG_MAX,LONG_MINの扱いの実装
		// 	return (-1);
		// else if (sign == -1 && (num > 922337203685477580ul
		// 		|| (num == 922337203685477580ul && (*str - '0') > 8)))
		// 	return (0);
		num = num * 10 + (*str++ - '0');
	}
	return (num * sign);
}

int	main(void)
{
	int	test;
	int	test2;
	int	test3;
	int	test4;
	int	test5;

	test = ft_atoi("");
	printf("%d\n", test);
	test2 = ft_atoi("      090910");
	printf("%d\n", test2);
	test3 = ft_atoi("--10");
	printf("%d\n", test3);
	test4 = ft_atoi("    -1234ab567");
	printf("%d\n", test4);
	test5 = ft_atoi("ff");
	printf("%d\n", test5);
	printf("%d\n", atoi("-9223372036854775809"));
	printf("%d\n", ft_atoi("-9223372036854775809"));
}
