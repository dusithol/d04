/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 15:41:39 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 15:41:57 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int _power;

    	if(power > 0)
    	{
        	_power = nb;
        	return(_power * ft_recursive_power(nb, power - 1));
    	}

    	else if(power == 0)
    	{
        	return(1);
    	}

    	else
    	{
        	return(0);
    	}
}
