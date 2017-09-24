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

std::string Attribute::getName() const
{
	return _name;
}

std::string Attribute::getValue() const
{
	return _value;
}

void Attribute::setName(std::string name)
{

}

void Attribute::setValue(std::string value)
{

}
