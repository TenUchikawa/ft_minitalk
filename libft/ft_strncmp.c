/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/18 13:51:23 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	if (!s1 || !s2)
		return (0);
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (str1[i] && str2[i] && i < n)
	{
		if (str1[i] != str2[i])
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (str1[i] - str2[i]);
}

// int	main(void)
// {
// 	// s2 null
// 	printf("\ns1: %d\n", strncmp("abc", NULL, 3));
// 	printf("\ns1: %d\n", ft_strncmp("abc", NULL, 3));
// 	// s1 null
// 	printf("\ns2: %d\n", strncmp(NULL, "abc", 3));
// 	printf("\ns2: %d\n", ft_strncmp(NULL, "abc", 3));
// }