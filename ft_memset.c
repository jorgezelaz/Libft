/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorgegon <jorgegon@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:48:35 by jorgegon          #+#    #+#             */
/*   Updated: 2024/03/27 12:50:52 by jorgegon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t		i;

	p = b;
	i = 0;
	while (i < len)
	{
		p[i] = (unsigned char)c;;
		i++;
	}
	return (ptr);
}