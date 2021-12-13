/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:18:27 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 16:30:09 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Incluimos las librerias esenciales.
*/
#include <iostream>
#include <string.h>

template <typename T>
T	min(T num1, T num2)
{
	return (num1 > num2 ? num2 : num1);
}

template <typename T>
T	max(T num1, T num2)
{
	return (num1 > num2 ? num1 : num2);
}

template <typename T>
void	swap(T & num1, T & num2)
{
	T	tmp;

	tmp = num1;
	num1 = num2;
	num2 = tmp;
}
