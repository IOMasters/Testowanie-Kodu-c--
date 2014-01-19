#include <iostream>
#include "Logger.h"
class ConsoleLogger:public Logger
{
public:

	void sendMessage(std::string message)
	{
		if(state)
		{
			std::cout<<"\033[1;32m"+message+"\033[0m\n";
		}
		else
		{
			std::cout<<"\033[1;31m"+message+"\033[0m\n";
		}
	}
	~ConsoleLogger()
	{
		if(state)sendMessage("All test pass");
		else sendMessage("One or more test ends Faliure");
	}


	
};