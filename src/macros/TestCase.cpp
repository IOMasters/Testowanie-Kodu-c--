

class TestCase
{
public:
	// void runTest()=0;
	
};

#define OpenTestCase(X) class X : public TestCase{ public:
#define CloseTestCase() };
#define AddTest(X) void X()
