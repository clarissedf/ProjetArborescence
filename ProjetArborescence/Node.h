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
	std::map<std::string, Attribute> listAttributes;
	void addAttribute(Attribute att);
	Attribute getAttribute(std::string name) const;
	int getId() const;

private:
	static int compteur;
	int id;
	std::string desc;

};

