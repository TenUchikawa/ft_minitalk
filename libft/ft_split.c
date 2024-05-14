/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/16 17:48:30 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	word_count(const char *s, char splitter)
{
	int		count;
	int		i;
	char	tmp;

	count = 0;
	i = 0;
	tmp = splitter;
	while (s[i])
	{
		if (s[i] == splitter && splitter != tmp)
			count++;
		tmp = s[i];
		i++;
	}
	if (tmp != splitter)
		count++;
	return (count);
}

int	len_to_delimiter(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	**free_to_zero(char **res, int i)
{
	while (--i >= 0)
	{
		free(res[i]);
		res[i] = NULL;
	}
	free(res);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char	**res;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	res = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
	if (!res)
		return (NULL);
	while (s[++i])
	{
		if (s[i] == c)
			continue ;
		res[j] = ft_substr(s, i, len_to_delimiter(s + i, c));
		if (!res[j])
			return (free_to_zero(res, j));
		i += len_to_delimiter(s + i, c) - 1;
		j++;
	}
	res[j] = NULL;
	return (res);
}

// #include <malloc/malloc.h>

// int	main(void)
// {
// 	// printf("ind");
// 	// char **res = ft_split("hello world 42 tokyo", ' ');
// 	char **res = ft_split("--1-2--3---4----5-----42", '-');
// 	printf("%zu\n", malloc_size(res));
// 	// int i = 0;

// 	while (*res)
// 	{
// 		printf("%s, ", *(res++));
// 	}
// }