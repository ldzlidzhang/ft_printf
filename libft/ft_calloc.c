/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 22:11:51 by lidanzhang        #+#    #+#             */
/*   Updated: 2022/11/18 15:59:46 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The C library function void *calloc(size_t nitems, size_t size) allocates 
the requested memory and returns a pointer to it. The difference in 
malloc and calloc is that malloc does not set the memory to zero 
where as calloc sets allocated memory to zero.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		len;
	void	*ptr;

	len = count * size;
	if (len % count != 0 || len % size != 0)
		return (NULL);
	ptr = malloc(len);
	if (ptr)
	{
		ft_bzero(ptr, len);
		return (ptr);
	}
	return (NULL);
}

/* calloc
int	main(void)
{
	int	i;
	int	n;
	int	*a;

	printf("Number of elements to be entered:");
	scanf("%d", &n);
	a = (int *)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n", n);
	i = 0;
	while (i < n)
	{
		scanf("%d", &a[i]);
		i++;
	}
	printf("The numbers entered are: ");
	i = 0;
	while (i < n)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	free(a);
	return (0);
}
*/
