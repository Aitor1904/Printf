/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:06:02 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/28 13:08:36 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_printf(char const *format, ...)
{
	int		i;
	va_list	vargs;

	va_start(vargs, format);
	i = 0;
	while (format[i])
	{
		
	}
	va_end(vargs);
	return (i);
}
