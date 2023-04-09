/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   blackjack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaait <ibenaait@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 18:25:12 by ibenaait          #+#    #+#             */
/*   Updated: 2023/04/02 21:52:14 by ibenaait         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

static int	len_nb(long nb)
{
	int		len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

static char	*str_isn(long n, int len, char *str)
{
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		str[0] = '-';
		n = n * -1;
	}
	while (n > 0)
	{
		str[len] = 48 + (n % 10);
		n = n / 10;
		len--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	long	nb;
	int		len;
	char	*str;

	nb = n;
	len = len_nb(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = str_isn(nb, len, str);
	return (str);
}
int main(int ac,char **av)
{
    int i;
    int l;
    int a;
    
    i = 0;
    l = 0;
    a = 0;
    if(ac == 2)
    {
        while (av[1][i])
        {
            if(av[1][i] == '2')
                l += 2;
            else if (av[1][i] == '3')
                l += 3;
            else if (av[1][i] == '4')
                l += 4;
            else if (av[1][i] == '5')
                l += 5;
            else if (av[1][i] == '6')
                l += 6;
            else if (av[1][i] == '7')
                l += 7;
            else if (av[1][i] == '8')
                l += 8;
            else if (av[1][i] == '9')
                l += 9;
            else if (av[1][i] == 'Q' || av[1][i] == 'J' \
            || av[1][i] == 'K' || av[1][i] == 'D' || av[1][i] == 'T')
                l += 10;
            else if(av[1][i] == 'A')
            {
                if(a == 0 && l <= 10)
                {
                    l += 11;
                    a = 1;
                }else
                    l += 1;
            }else
            {
                write(1,"Invalid input!", 15);
                return (0);
            }
            i++;
        }
        if(l == 21)
            write(1,"Blackjack!",11);
        else
            write(1, ft_itoa(l),strlen(ft_itoa(l)));
    }
}