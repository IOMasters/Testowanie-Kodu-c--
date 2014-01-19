#include <vector>

class TestCase
{
public:
	virtual void runTest()=0;
	virtual void beforeTest(){};
	virtual void afterTest(){};

	
};

#define OpenTestCase(X) class X : public TestCase{ public: void runTest()
#define CloseTestCase(X) }; 

#define BeforeTest() void beforeTest()
#define AfterTest() void afterTest()
