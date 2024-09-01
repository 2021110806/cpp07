#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->arr = new T[1];
	this->arr[0] = NULL;
	this->len = 1;
	std::cout << "default construct called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int len)
{
	this->arr = new T[len];
	this->len = len;
	std::cout << "unsigned int constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	*this = other;
	std::cout << "copy constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] arr;
	std::cout << "destructor called" << std::endl;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array& other)
{
	std::cout << "copy assigned constructor called" << std::endl;
	if (this == &other){
		return *this;
	}
	delete[] this -> arr;
	this->len = other.len;
	this->arr = new T[this->len];
	for (unsigned  int i = 0; i < this->len ; i++){
		this->arr[i] = other.arr[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int i)
{
	if (i >= len)
		throw outOfRange();
	return this -> arr[i];
}

template <typename T>
unsigned int Array<T>::size(void)
{
	return this -> len;
}
