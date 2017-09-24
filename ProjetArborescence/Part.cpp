#include "Part.h"



Part::Part() : Containable()
{
	std::string desc("Ceci est une part (feuille), ID=");
	int tid = this->getId();
	desc.append(std::to_string(tid));
}

void Part::setDescription(std::string desc)
{
	this->desc = desc;
}

Part::~Part()
{
}
