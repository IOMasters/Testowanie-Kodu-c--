#include <iostream>
#include "Logger.h"
class ConsoleLogger:public Logger
{
public:

	void sendMessage(std::string message)
	{
		std::cout<<message;
	}

	
};