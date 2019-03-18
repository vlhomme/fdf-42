/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_sep.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlhomme <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/18 07:35:21 by vlhomme           #+#    #+#             */
/*   Updated: 2019/03/18 07:35:23 by vlhomme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_sep(char const *s, char c)
{
	int	len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
}
