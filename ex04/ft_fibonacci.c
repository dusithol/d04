/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:42:58 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 15:43:23 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
    int fib;

    if(index == 0)
    {
        fib = 0;
    }
    else if (index == 1)
    {
        fib = 1 ;
    }
    else if (index > 1)
    {
        fib = ft_fibonacci(index-2) + ft_fibonacci(index-1);
    }
    else
    {
        fib = -1;
    }
    return (fib);
}
