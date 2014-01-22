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
				tests[i]->beforeTest();
				tests[i]->runTest();
				tests[i]->afterTest();
				logger->succes();	
				logger->sendMessage(tests[i]->discription()+"Complete Sucess! ");	
			}
			logger->sendMessage("Test Complete Sucess! ");

		}
		catch(AssertException e) {
			logger->failed();
			logger->sendMessage("Test Failiure "+e.what());
			
		}
		
	}
	~TestExecute()
	{
		for (int i = 0; i < tests.size(); ++i)
		{
			delete tests[i];
		}
		
		delete logger;

	}


};