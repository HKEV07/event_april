/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frame.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 15:36:12 by ibenaait          #+#    #+#             */
/*   Updated: 2023/04/02 21:54:46 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "farme.h"

int main(int ac, char **av)
{
    int maxlen;
    char **sp;
    int i = 0;
    int len;
    if(ac == 2)
    {
        sp = ft_split(av[1], ' ');
        maxlen = ft_strlen(*sp);
        while (sp[i])
        {
            if(maxlen < ft_strlen(sp[i]))
                maxlen = ft_strlen(sp[i]);
            i++;
        }
        i = 0;
        while(i++ < maxlen + 4)
            write(1, "*",2);
        while (*sp)
        {
            write(1,"\n",2);
            write(1, "*",2);
            write(1, " ",2);
            len = ft_strlen(*sp);
            write(1, *sp, ft_strlen(*sp));
            while (len < maxlen + 1)
            {
                write(1, " ",2);
                len++;
            }
            write(1, "*",2);
            sp++;
        }
        i = 0;
        write(1,"\n",2);
        while(i++ < maxlen + 4)
            write(1, "*",2);
    }
    return 0;
}