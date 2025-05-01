/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:20:34 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:49:36 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	p = (char *)str;
	while (p[i] != '\0' && i < (int)len)
	{
		if (*to_find == '\0')
			return (p);
		if (p[i] == to_find[0])
		{
			j = 0;
			while (p[i + j] != '\0' && to_find[j] != '\0'
				&& p[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return (&p[i]);
		}
		i++;
	}
	return (0);
}

// int main(void)
// {
//     const char *haystack = "Hello, this is a test string.";
//     const char *needle1 = "test";
//     const char *needle2 = "notfound";
//     const char *needle3 = "";

//     char *result;

//     // テスト1: 部分文字列が見つかるケース
//     result = ft_strnstr(haystack, needle1, strlen(haystack));
//     if (result)
//         printf("Test 1 passed: Found '%s' in '%s'\n", needle1, result);
//     else
//         printf("Test 1 failed: '%s' not found\n", needle1);

//     // テスト2: 部分文字列が見つからないケース
//     result = ft_strnstr(haystack, needle2, strlen(haystack));
//     if (result)
//         printf("Test 2 failed: Unexpectedly found '%s' in '%s'\n", needle2, result);
//     else
//         printf("Test 2 passed: '%s' not found\n", needle2);

//     // テスト3: 検索対象が空文字列の場合
//     result = ft_strnstr(haystack, needle3, strlen(haystack));
//     if (result == haystack)
//         printf("Test 3 passed: Empty needle returns haystack\n");
//     else
//         printf("Test 3 failed\n");

//     // テスト4: 検索範囲を制限するケース
//     result = ft_strnstr(haystack, "this", 5);
//     if (result)
//         printf("Test 4 failed: Found 'this' in restricted range\n");
//     else
//         printf("Test 4 passed: 'this' not found within first 5 characters\n");

//     return 0;
// }
