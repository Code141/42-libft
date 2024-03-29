/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gelambin <gelambin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:15:08 by gelambin          #+#    #+#             */
/*   Updated: 2017/11/09 15:14:31 by gelambin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s1, int c)
{
	while ((char)c != *s1 && *s1)
		s1++;
	return (((char)c != *s1) ? NULL : (char*)s1);
}
