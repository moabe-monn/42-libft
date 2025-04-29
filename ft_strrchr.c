/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:50:39 by moabe             #+#    #+#             */
/*   Updated: 2025/04/29 16:50:39 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strrchr(const char *s, int c)
{
	while (*s)
	{
		s++;
	}
	s--;
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s--;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}

// int main(void)
// {
// 	char test[] = "computer program";
// 	char *p;
//     char *q;
//     char *r;
//     char *s;

// 	p = strchr(test,'p');
// 	printf("検索文字が見つかった場所から表示→%s\n",p);
//     q = strrchr(test,'p');
//     printf("検索文字が見つかった場所から表示→%s\n",q);
//     r = strchr(test,'p');
// 	printf("検索文字が見つかった場所から表示→%s\n",r);
//     s = ft_strrchr(test,'p');
//     printf("検索文字が見つかった場所から表示→%s\n",s);
// 	return (0);
// }
