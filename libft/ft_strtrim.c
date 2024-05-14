/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 07:01:20 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/16 09:53:25 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char c, const char *set)
{
	int	cur;

	cur = -1;
	while (set[++cur])
		if (set[cur] == c)
			return (1);
	return (0);
}

int	get_start(const char *s1, const char *set)
{
	int	i;
	int	res;

	i = -1;
	res = 0;
	while (s1[++i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

int	get_end(const char *s1, const char *set)
{
	int	i;
	int	res;

	i = ft_strlen(s1);
	res = 0;
	while (s1[--i])
	{
		if (!is_in_set(s1[i], set))
			break ;
		res++;
	}
	return (res);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		start;
	int		end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (ft_strlen(s1) == (long unsigned int)start)
		return (ft_strdup(""));
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) - start - end + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1 + start, ft_strlen(s1) - start - end + 1);
	return (str);
}

// int	main(void)
// {
// 	ft_strtrim("abcdba", "acb");
// }