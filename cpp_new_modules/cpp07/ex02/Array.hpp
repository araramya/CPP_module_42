#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array&);
		~Array(void);
		
		Array&	operator=(const Array&);
		T&		operator[](int);
		
		class ArrayOutOfRange: public std::exception {
			public:
				virtual const char* what() const throw();
		};

		unsigned int	size(void) const;
		
	private:
		unsigned int	len;
		T				*arr;
};

template<typename T>
Array<T>::Array(void) { arr = new T[0]; len = 0; }

template<typename T>
Array<T>::Array(unsigned int n) 
{
	if (n < 0)
		throw std::underflow_error("out");
	len = n;
	arr = new T[n];
}

template <typename T>
Array<T> :: Array(const Array<T> &_data) 
{
	len = _data.size();
	arr = new T[len];
	for (size_t i = 0; i < _data.len; i++)
		arr[i] = _data.arr[i];
}

template<typename T>
Array<T>::~Array(void) 
{
	delete[] arr; 
}

template <class T>
Array<T> & Array<T> :: operator=(const Array<T> & other) 
{
	if (this == &other) 
		return *this;
	
	delete [] arr;
	len = other.len;
	arr = new T[len];
	for (unsigned int i = 0; i < len; i++)
		arr[i] = other.arr[i];
		
	return *this;
}

template<typename T>
T& Array<T>::operator[](int index)
{
	if (index < 0 || static_cast<unsigned int>(index) > (this->len - 1))
		throw ArrayOutOfRange();
	else
		return this->arr[index];
}

template<typename T>
unsigned int Array<T>::size(void) const 
{
	return this->len;
}

template<typename T>
const char* Array<T>::ArrayOutOfRange::what(void) const throw()
{
	return "Index out of range";
}

#endif