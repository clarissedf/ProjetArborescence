#pragma once
#include <string>

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
};

