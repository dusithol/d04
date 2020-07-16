/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:51:05 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 14:35:17 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     ft_iterative_factorial(int nb)
{
        int factorial;
    
        factorial = 1;
        if (nb > 0 && nb < 13)
        {
            while(nb > 0)
            {
                factorial = factorial * nb;
                nb = nb -1;
            }
            
            return(factorial);
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
