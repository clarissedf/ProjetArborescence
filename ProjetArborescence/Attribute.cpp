#include "Attribute.h"



Attribute::Attribute(std::string name) : 
	_name(name)
{
}

Attribute::Attribute(std::string name, std::string value) :
	_name(name),
	_value(value)
{
}


Attribute::~Attribute()
{
}
