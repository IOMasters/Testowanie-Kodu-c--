#include <vector>

class TestCase
{
public:
	virtual void runTest()=0;
	virtual void beforeTest(){};
	virtual void afterTest(){};
	virtual std::string discription(){return "";}

	
};

#define OpenTestCase(X) class X : public TestCase{ public: void runTest()
#define CloseTestCase() }; 

#define BeforeTest() void beforeTest()
#define AfterTest() void afterTest()
#define Discription(X)virtual std::string discription(){return X;}
