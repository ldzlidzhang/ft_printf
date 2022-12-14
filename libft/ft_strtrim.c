/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 11:36:56 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/08 13:32:56 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;

	if (!s1 || !set)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/*
int	main(void)
{
	char	str1[] = "***())(((&&&@Happy Birthday@*&*&&*&*^^^^*&&";
	char	str2[] = "*^&*(())))&";
	char	*des;

	des = ft_strtrim(str1, str2);
	printf("%s\n", des);
	return (0);
}
*/
