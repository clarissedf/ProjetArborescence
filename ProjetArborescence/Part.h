#pragma once
#include "Containable.h"

class Part : public Containable
{
public:
	Part();
	~Part();

protected:
	virtual void setDescription(std::string desc);
};

