/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:33:13 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 17:28:38 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

template <typename A,typename B, typename C>
void	iter(A first, B second, C third)
{
	for (size_t i = 0; i < second; i++)
	{
		third((*first)[i]);
	}
}
