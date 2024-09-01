#ifndef ARRAY_H
#define ARRAY_H

# include <iostream>

template <typename T>
class Array{
	private:
		T* arr;
		unsigned int len;
	public:
		Array();
		Array(unsigned int len);
		Array(const Array& other);
		~Array();
		Array &operator=(const Array& other);
		T& operator[](unsigned int a);
		unsigned int size(void);

		class outOfRange:public std::exception{
			public:
				const char* what() const throw(){
					return "Out Of Range";
				}
		};
};

#endif 