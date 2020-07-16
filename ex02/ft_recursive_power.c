/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dusithol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:53:59 by dusithol          #+#    #+#             */
/*   Updated: 2020/07/16 15:38:56 by dusithol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int _power;
    	
	if(power > 0)
    	{	
        	_power = nb;
        	while(power > 1)
        	{
            		_power = _power * nb;
            		power--;
        	}
        	
		return(_power);
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
