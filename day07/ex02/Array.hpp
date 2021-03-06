/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amouhtal <amouhtal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 18:46:40 by amouhtal          #+#    #+#             */
/*   Updated: 2021/10/28 17:28:58 by amouhtal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
private :
	T *_arr;
	unsigned int _lenght;

public :
	Array( void ) : _arr(new T[0]), _lenght(0){};
	Array(unsigned int n) : _arr(new T[n]), _lenght(n){};
	Array(Array &other)
	{
		*this = other;
	}
	Array &operator=(const Array &rhs)
	{
		if (this != &rhs)
		{
			this->_lenght = rhs._lenght;
			this->_arr = new T[_lenght];
			for (unsigned int i = 0; i < _lenght; i++)
			{
				this->_arr[i] = rhs._arr[i];
			}
		}
		return *this;
	}
	class OutOfRange : public std::exception
	{
		const char *what() const throw(){
			return "Element out of the range";}
	};
	T &operator[](unsigned int pos) const
	{
		if (pos < 0 || pos >= _lenght)
			throw (OutOfRange());
		else
			return (this->_arr[pos]);
	};
	unsigned int size( void ) const
	{
		return (this->_lenght);
	}
	~Array()
	{
		delete[] this->_arr;
	}
};

#endif