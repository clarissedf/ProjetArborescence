#pragma once
#include <vector>
#include "Containable.h"


class Container : public Containable
{
public:
	Container();
	~Container();
	std::vector<Containable> getContained() const;
	void addContained(const Containable& containable);
	void setContained(std::vector<Containable> lContained);

protected:
	virtual void setDescription(std::string desc);

private:
	std::vector<Containable> lContained;
};

