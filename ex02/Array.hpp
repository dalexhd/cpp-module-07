/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aborboll <aborboll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:47:58 by aborboll          #+#    #+#             */
/*   Updated: 2021/12/13 19:45:40 by aborboll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdlib.h>
template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;
	public:
		// Constructors
		Array(void): _array(new T[0]), _size(0) {};
		Array(size_t size): _array(new T[size]), _size(size) {};
		Array(const Array& other) {
			*this = other;
		};
		~Array() {
			delete[] _array;
		};

		size_t	size(void) const
		{
			return (this->_size);
		}

		// Operators
		Array& operator=(const Array& other)
		{
			if (this == &other)
				return (*this);
			if (_size != other._size)
			{
				_size = other._size;
				_array = new T[_size];
			}
			for (size_t i = 0; i < other._size; i++)
				_array[i] = other._array[i];
			return (*this);
		}

		T& operator[](size_t num)
		{
			if (num < 0)
				throw Array::NegativeIndexException();
			else if (_size <= num)
				throw Array::OutOfBoundIndexException();
			return _array[num];
		}

		const	T& operator[](size_t num) const
		{
			if (num < 0)
				throw Array::NegativeIndexException();
			else if (_size <= num)
				throw Array::OutOfBoundIndexException();
			return _array[num];
		}

		// Exceptions
		class NegativeIndexException : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Index is negative. Please enter a value >= 0!";
				}
		};

		class OutOfBoundIndexException : public std::exception
		{
			public:
				char const * what() const throw()
				{
					return "Index is out of bound. Please enter a value >= 0!";
				}
		};
};

#endif
