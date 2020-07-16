/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 11:54:50 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 14:50:05 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_recursive_factorial(int nb)
{
        int factorial;
    
        factorial = 1;
        if (nb > 0 && nb < 13)
        {
            factorial = factorial * nb;
            return(factorial * ft_recursive_factorial(nb - 1));
        }
        
        else if (nb == 0)
        {
            return (1);
        }
    
        else
        {
            return(0);
        }
}


