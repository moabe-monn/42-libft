/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:51:54 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:51:54 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	const char *sub_start;
	char *p;
	size_t i;

	if (start > ft_strlen(s))
	{
		p = ft_calloc(); //ここわからない
		if (!p)
			return (NULL);
		return (p);
	}
	sub_start = s + start;
	strlength = ft_strlen(sub_start);
	i = 0;
	if (len < strlength)
		strlength = len;
	p = ft_calloc(sizeof(char), strlength + 1); //終端文字が自動的に入って便利
	if (!p)
		return (NULL);
	while (strlength > i)
	{
		*(p + i) = *(sub_start + i);
		i++;
	}
	return (p);
}
