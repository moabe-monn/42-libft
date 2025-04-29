/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 07:26:07 by moabe             #+#    #+#             */
/*   Updated: 2025/04/27 16:20:52 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\t'
		|| *str == '\v' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign = sign * (-1);
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + (*str - '0');
		str++;
	}
	num = num * sign;
	return (num);
}

// int	main(void)
// {
// 	int test = ft_atoi("");
// 	printf("%d\n",test);
// 	int test2 = ft_atoi("      090910");
// 	printf("%d\n",test2);
// 	int test3 = ft_atoi("--10");
// 	printf("%d\n",test3);
// 	int test4 = ft_atoi("    ---+--+1234ab567");
// 	printf("%d\n",test4);
// 	int test5 = ft_atoi("ff");
// 	printf("%d\n",test5);
// }
