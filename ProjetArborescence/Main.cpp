#include <iostream>
#include "Node.h"
#include "Attribute.h"

int main(int argc, char* argv[]) {

	Node n1;
	Attribute a1("attribute", "value");

	std::cout << a1.getName() << std::endl;


	n1.addAttribute(a1);

	system("pause");
	return 0;
}