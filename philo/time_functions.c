/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   time_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlanzas- <dlanzas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:29:01 by dlanzas-          #+#    #+#             */
/*   Updated: 2023/11/22 19:27:39 by dlanzas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/**
* Function to get the actual time
*
* @return It returns the time in milisecconds
*/
long	get_time(void)
{
	struct timeval	now;
	long			milliseconds;	

	gettimeofday(&now, NULL);
	milliseconds = now.tv_sec * 1000;
	milliseconds += now.tv_usec / 1000;
	return (milliseconds);
}

/**
* Function to make the process sleep
*
* @param u_secs As a parameter it receives the number of microseconds to sleep
*/
void	ft_usleep(int u_secs)
{
	int			m_secs;
	long		start;

	m_secs = u_secs / 1000;
	start = get_time();
	while (get_time() - start < m_secs)
		usleep(100);
	return ;
}
