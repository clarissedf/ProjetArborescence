#pragma once
#include <string>

class Attribute
{
public:
	Attribute(std::string name);
	Attribute(std::string name, std::string value);
	virtual ~Attribute();

	std::string getName() const;
	void setName(std::string name);

	std::string getValue() const;
	void setValue(std::string value);

private:
	std::string _name;
	std::string _value;
};

