#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\ProjetArborescence\Node.h"
#include "..\ProjetArborescence\Attribute.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestArborescence
{		
	TEST_CLASS(Attribute)
	{
	public:
		
		TEST_METHOD(getName)
		{
			std::string name("attribute");
			std::string value("value");

			Attribute a1(name, value);

		}

	};
}