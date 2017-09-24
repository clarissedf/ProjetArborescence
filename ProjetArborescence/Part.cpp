#include "Part.h"



Part::Part() : Containable()
{
	int tid = this->getId();
	std::string desc("Ceci est une part (feuille), ID=");
	desc.append(std::to_string(tid));
	this->setDescription(desc);
}


Part::~Part()
{
}
