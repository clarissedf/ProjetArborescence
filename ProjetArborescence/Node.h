#pragma once
#include <map>
#include <string>
#include "Attribute.h"

class Node
{
private:
	static int compteur;
	int id;
	std::string desc;

public:
	Node();
	~Node();
	std::string getDescription() const;
	std::map<std::string, Attribute> listAttributes;

public:
	Node();
	virtual ~Node();
	void addAttribute(Attribute att);
	Attribute getAttribute(std::string name) const;
};

