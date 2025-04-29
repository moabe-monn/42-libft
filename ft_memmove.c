/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 17:16:00 by moabe             #+#    #+#             */
/*   Updated: 2025/04/27 18:16:28 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char		*d_cpy;
	const unsigned char	*s_cpy;
	unsigned char		*tmp_cpy[count]; //直す
	size_t				i;

	d_cpy = (unsigned char *)dest;
	s_cpy = (const unsigned char *)src;
	i = 0;
	while (i < count)
	{
		*(tmp_cpy + i) = *(s_cpy + i);
		i++;
	}
	i = 0;
	while (i < count)
	{
		*(d_cpy + i) = *(tmp_cpy + i);
		i++;
	}
	return (dest);
}

// #define BUFSIZE 10

// int	main(void)
// {
// 	char	src1[] = {"0123456789"};
// 	char	src2[] = {"0123456789"};
// 	char	src1_[] = {"0123456789"};
// 	char	src2_[] = {"0123456789"};
// 	char	*dest;

// 	dest = "dest";
// 	memmove(&src1[0], &src1[5], 5);
// 	printf("%s\n", src1);
// 	memmove(src2, dest, strlen(dest));
// 	printf("%s\n", src2);

// 	ft_memmove(&src1_[0], &src1_[5], 5);
// 	printf("%s\n", src1_);
// 	ft_memmove(src2_, dest, strlen(dest));
// 	printf("%s\n", src2_);
// 	return (0);
// }
