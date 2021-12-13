/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:32:51 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 17:43:02 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

static	void	fn_string(std::string val)
{
	std::cout << val << std::endl;
}

static	void	fn_int(int val)
{
	std::cout << val << std::endl;
}

static	void	fn_float(float val)
{
	std::cout << val << std::endl;
}

static	void	fn_double(double val)
{
	std::cout << val << std::endl;
}

static	void	fn_char(char val)
{
	std::cout << val << std::endl;
}

int main(void)
{
	std::cout << "---- String array ----" << std::endl;
	std::string strArray[2] = {"Hola", "Mundo"};
	iter(&strArray, sizeof(strArray) / sizeof(std::string), fn_string);

	std::cout << "---- Int array ----" << std::endl;
	int intArray[2] = {1, 2};
	iter(&intArray, sizeof(intArray) / sizeof(int), fn_int);

	std::cout << "---- Float array ----" << std::endl;
	float floatArray[2] = { 1.02f, 2.04f };
	iter(&floatArray, sizeof(floatArray) / sizeof(float), fn_float);

	std::cout << "---- Double array ----" << std::endl;
	double doubleArray[2] = {1.1, 2.2};
	iter(&doubleArray, sizeof(doubleArray) / sizeof(double), fn_double);

	std::cout << "---- Char array ----" << std::endl;
	char charArray[2] = {'a', 'b'};
	iter(&charArray, sizeof(charArray) / sizeof(char), fn_char);
	return (0);
}
