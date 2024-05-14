/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/16 05:19:36 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	target;

	target = (char)c;
	str = (char *)s;
	while (*str != target)
	{
		if (!(*str))
			return (NULL);
		str++;
	}
	return (str);
}

// int	main(void)
// {
// 	char *s = "libft-test-tokyo";

// 	printf("a %d\n", 'l' + 256);
// 	printf("\nchr %s\n", ft_strchr(s, 'l' + 256));
// 	printf("\nchr %s\n", strchr(s, 'l' + 256));
// 	return (0);
// }