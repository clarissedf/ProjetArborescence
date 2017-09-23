#pragma once
#include <string>

class Attribute
{
public:
	Attribute(std::string name);
	Attribute(std::string name, std::string value);
	virtual ~Attribute();


private:
	std::string _name;
	std::string _value;
};

