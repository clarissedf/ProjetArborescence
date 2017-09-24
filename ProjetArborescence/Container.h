#pragma once
#include <vector>
#include "Containable.h"


class Container : public Containable
{
public:
	Container();
	~Container();
	std::vector<Containable> getContained();
	void addContained(Containable containable);
	void setContained(std::vector<Containable> lContained);

private:
	std::vector<Containable> lContained;
};

