/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tuchikaw <tuchikaw@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 03:31:01 by tuchikaw          #+#    #+#             */
/*   Updated: 2024/04/16 09:52:17 by tuchikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int		i;
	char	target;
	char	*last;

	target = (char)c;
	i = 0;
	last = NULL;
	while (s[i] != 0)
	{
		if (s[i] == target)
			last = (&(s[i]));
		i++;
	}
	if (s[i] == target)
		last = (&(s[i]));
	if (last)
		return (last);
	return (NULL);
}
