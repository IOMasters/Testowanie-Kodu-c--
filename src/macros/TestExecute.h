#include <vector>
#include "../logger/Logger.h"
class TestExecute
{
	std::vector<TestCase*> tests;
	Logger *logger;
public:
	TestExecute(Logger *log):logger(log){}

	void addTests(TestCase* value){tests.push_back(value);}
	void runTests()
	{
		try 
		{
			for (int i = 0; i < tests.size(); ++i)
			{
				tests[i]->runTest();
			}
			logger->sendMessage("Test Complete Sucess!");			
		}
		catch(AssertException e) {
			logger->sendMessage("Test Failiure"+e.what());
		}
		
	}
	~TestExecute()
	{
		for (int i = 0; i < tests.size(); ++i)
		{
			delete tests[i];
		}
		logger->sendMessage("Test Finish");
		delete logger;

	}


};