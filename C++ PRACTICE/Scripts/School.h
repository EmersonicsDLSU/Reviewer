#pragma once
class School
{
private:
	int size = 0;
public:
	School(int size);
	void WelcomeMessage();
	School* operator+(const School* other);
	School operator+(const School& other);

};

