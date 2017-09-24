#include <iostream>
#include "Node.h"
#include "Attribute.h"

int main(int argc, char* argv[]) {

	/* Attribute Class */
	std::cout << "Testing Attribute Class" << std::endl;

	Attribute a1("attribute", "value");

	std::cout << a1.getName() << std::endl;
	std::cout << a1.getValue() << std::endl;

	a1.setName("newAttribute");
	a1.setValue("newValue");

	std::cout << a1.getName() << std::endl;
	std::cout << a1.getValue() << std::endl;

	/* Node Class : abstract
	std::cout << "Testing Node Class" << std::endl;

	Node n1;
	std::cout << n1.getId() << std::endl;

	n1.addAttribute(a1);
	Attribute a2 = n1.getAttribute("newAttribute");
	std::cout << a2.getValue() << std::endl; */

	system("pause");
	return 0;
}