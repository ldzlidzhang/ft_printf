/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:22:46 by lidzhang          #+#    #+#             */
/*   Updated: 2022/11/10 11:12:48 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*dest;
	int		i;

	dest = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			dest = &((char *)s)[i];
		i++;
	}
	if (c == '\0')
		dest = &((char *)s)[i];
	return (dest);
}

/*
int	 main(void)
{
	const char	str[] = " QMCjl vfvff";
	const char	ch = 'C';
	char		*ret;

	ret = ft_strrchr(str, ch);
	printf("String after |%c| is - |%s|\n", ch, ret);
	return (0);
}
*/
