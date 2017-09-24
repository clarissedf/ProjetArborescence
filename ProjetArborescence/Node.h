#pragma once
#include <map>
#include <string>
#include "Attribute.h"

class Node
{
public:
	Node();
	~Node();
	std::string getDescription() const;
	void addAttribute(Attribute att);
	Attribute getAttribute(std::string name) const;
	int getId() const;

protected:
	std::string desc;
	virtual void setDescription(std::string) = 0;

private:
	static int compteur;
	int id;
	std::map<std::string, Attribute> listAttributes;

};

