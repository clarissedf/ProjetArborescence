#include "Node.h"

int Node::compteur = 0;

Node::Node() : id(compteur)
{
	compteur++;
}


Node::~Node()
{
}

void Node::addAttribute(Attribute att)
{
	std::pair<std::string, Attribute> couple(att.getName(), att);
	listAttributes.insert(couple);
}

Attribute Node::getAttribute(std::string name) const
{
	std::map<std::string, Attribute>::const_iterator ite = listAttributes.find(name);
	if (ite == listAttributes.end())
	{
		//exception
	}
	return ite->second;
}

//int Node::getAttribute(std::string name, Attribute* o_att) const
//{
//	if (o_att != NULL) return -1;
//
//	std::map<std::string, Attribute>::const_iterator ite = listAttributes.find(name);
//	if (ite != listAttributes.end()) {
//		o_att = new Attribute(*ite);
//	}
//	return (o_att != NULL) ? 0 : -1;
//}
