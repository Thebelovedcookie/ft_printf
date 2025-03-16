/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmahfoud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 09:04:08 by mmahfoud          #+#    #+#             */
/*   Updated: 2023/11/30 13:35:46 by mmahfoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *input, ...);
void	ft_input(char c, va_list args, int *n);
void	ft_putchar(int c, int *n);
void	ft_put_hexa(long unsigned int number, int *n, int c);
void	ft_putstr_printf(char *str, int *n);
void	ft_putnbr(long int nbr, int *n, char boolean);
void	ft_put_ptr(long unsigned int ptr, int *n);

#endif
