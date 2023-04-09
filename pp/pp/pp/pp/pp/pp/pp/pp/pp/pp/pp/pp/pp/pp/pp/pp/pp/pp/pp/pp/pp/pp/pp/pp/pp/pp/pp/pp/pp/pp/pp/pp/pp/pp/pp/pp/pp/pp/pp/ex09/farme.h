/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   farme.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 16:24:22 by ibenaait          #+#    #+#             */
/*   Updated: 2023/04/02 16:37:13 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FARME
# define FARME

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
#endif