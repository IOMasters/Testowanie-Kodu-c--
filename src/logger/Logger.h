#pragma once

class Logger
{
public:
	bool state;
	virtual void sendMessage(string message)=0;
	void succes(){state=true;}
	void failed(){state=false;}
	virtual ~Logger(){}
	

};