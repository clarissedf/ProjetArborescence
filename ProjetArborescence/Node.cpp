#include "Node.h"

int Node::compteur = 0;

Node::Node() : id(compteur)
{
	compteur++;
}


Node::~Node()
{
}
