/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ailopez <ailopez@student.42urduliz.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 13:06:02 by ailopez           #+#    #+#             */
/*   Updated: 2026/10/31 13:31:40 by ailopez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_formats(char specifier, va_list vargs)
{
	char	jc;
	char	*js;
	int		i;

	if (specifier == 'c')
	{
		jc = va_arg(vargs, int);
		write(1, &jc, 1);
		return (1);
	}
	else if (specifier == 's')
	{
		i = 0;
		js = va_arg(vargs, char *);
		if (js == NULL)
			write (1, NULL, 1);
		else
		{

		}
		return (1);
	}
	else if (specifier == 'd')
	{

	}
}

int	ft_printf(char const *format, ...)
{
	int		i;
	int		count;
	va_list	vargs;

	va_start(vargs, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (format[i] == '%')
		{
			count += ft_formats(format[i + 1], vargs);
			i++;
		}
		else
		{
			write (1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(vargs);
	return (count);
}
