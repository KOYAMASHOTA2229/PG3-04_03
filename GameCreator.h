#pragma once
class GameCreator
{
public:

	GameCreator();

	virtual ~GameCreator();

	virtual void Attendance();

protected:
	
	const char* name;

};

