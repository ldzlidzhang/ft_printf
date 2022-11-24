/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_printf_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lidzhang <lidzhang@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:43:10 by lidzhang          #+#    #+#             */
/*   Updated: 2022/11/23 10:00:24 by lidzhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	printf(" NULL %s NULL \n", NULL);
	printf(" %#x %#x %lx %lx %lx %#x %#x \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	
	ft_printf(" %s %s %s %s %s \n", " - ", "", "4", "", "2 ");
	ft_printf(" NULL %s NULL \n", NULL);
	ft_printf(" %#x %#x %#x %#x %#x %#x %#x \n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	return (0);
}