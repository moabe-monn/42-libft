/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moabe <moabe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:19:26 by moabe             #+#    #+#             */
/*   Updated: 2025/05/01 13:53:30 by moabe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_splitter(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_length(char *str, char *charset)
{
	int	len;

	len = 0;
	while (str[len] && !find_splitter(str[len], charset))
		len++;
	return (len);
}

int	count_words(char *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (find_splitter(*str, charset))
			in_word = 0;
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	*ft_strndup(char *src, int n)
{
	int		i;
	char	*copy;

	if (src == NULL)
		return (NULL);
	copy = (char *)malloc((n + 1) * sizeof(char));
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		words;
	int		i;

	i = 0;
	words = count_words(str, charset);
	split_str = (char **)malloc(sizeof(char *) * (words + 1));
	if (split_str == NULL)
		return (NULL);
	while (*str)
	{
		if (!find_splitter(*str, charset))
		{
			split_str[i] = ft_strndup(str, word_length(str, charset));
			if (!split_str[i])
				return (NULL);
			str += word_length(str, charset);
			i++;
		}
		else
			str++;
	}
	split_str[i] = NULL;
	return (split_str);
}

// int	main(void)
// {
// 	char	**result;
// 	int		i;

// 	result = ft_split("Hello,,,World!!  42Tokyo,Piscine!,8days /left", ",! /");
// 	i = 0;

// 	if (!result)
// 	{
// 		printf("メモリ確保失敗\n");
// 		return (1);
// 	}
// 	while (result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }
