#include "Container.h"



Container::Container() : Containable()
{
	int tid = this->getId();
	std::string desc("Ceci est un container (noeud), ID=");
	desc.append(std::to_string(tid));
	this->setDescription(desc);
}


Container::~Container()
{
}

void Container::setDescription(std::string desc)
{
	this->desc = desc;
}


std::vector<Containable&> Container::getContained() const
{
	return this->lContained;
}


void Container::addContained(Containable& containable)
{
	this->lContained.push_back(containable);
}


void Container::setContained(std::vector<Containable&> lContained)
{
	this->lContained = lContained;
}