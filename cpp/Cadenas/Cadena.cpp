#include "Cadena.hpp"
#include <new>

Cadena::Cadena(const char* str) 
{
	if (str == nullptr)
	{
		this->_str = new char[1];
		*(this->_str) = '\0';
		return;
	}
	this->_str = new char[strlen(str) + 1];
	strcpy(this->_str, str);
}

Cadena::Cadena(const Cadena& cad)
{
	this->_str = new char[strlen(cad._str) + 1];
	strcpy(this->_str, cad._str);
}

Cadena::~Cadena()
{
	delete [] this->_str;
}

Cadena Cadena::operator+(const char* str) const
{
	char* aux = new char[strlen(this->_str) + strlen(str) + 1];
	strcpy(aux, this->_str);
	strcat(aux, str);
	Cadena cad(aux);
	delete [] aux;
	return cad;
}

Cadena& Cadena::operator=(const Cadena &cad)
{
	delete [] this->_str;
	this->_str = new char[strlen(cad._str) + 1];
	strcpy(this->_str, cad._str);
	return *this;
}

std::ostream& operator<<(std::ostream &stream, const Cadena &cad)
{
	return stream << cad._str;
}
