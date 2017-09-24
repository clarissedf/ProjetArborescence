#include "Container.h"



Container::Container()
{
}


Container::~Container()
{
}


std::vector<Containable> Container::getContained()
{
	return this->lContained;
}


void Container::addContained(Containable containable)
{
	this->lContained.push_back(containable);
}


void Container::setContained(std::vector<Containable> lContained)
{
	this->lContained = lContained;
}