
#include <iostream>
#include "../macros/TestCase.cpp"
#include "../macros/Assert.h"
#include "MojaSuperKlasa.h"
using namespace std;

OpenTestCase(TestMojaSuperKlasa){assertion::AssertEqual(34,obiekt->getValue());}
Discription("To jest Fajny Test")
BeforeTest()
{
	obiekt=new MojaSuperKlasa();
	obiekt->setValue(34);
}
AfterTest()
{
	delete obiekt;
}
MojaSuperKlasa * obiekt;
CloseTestCase()