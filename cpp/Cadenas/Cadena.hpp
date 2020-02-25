
#ifndef CADENA_HPP_INCLUDED
#define CADENA_HPP_INCLUDED

#include <string.h>
#include <iostream>

class Cadena
{
	private:
		char * _str;
	public:
		// Constructors
		Cadena(const char * = nullptr);
		Cadena(const Cadena&);
		// Destructor
		~Cadena();

		// Operator overloads
		Cadena operator+(const char *) const;
		Cadena& operator=(const Cadena&);
		friend std::ostream& operator<<(std::ostream&, const Cadena&);
};

#endif
