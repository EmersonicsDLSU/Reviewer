#include "School.h"

#include <iostream>
#include <format>

School::School(int size) : size(size)
{
}

void School::WelcomeMessage()
{
	std::cout << std::format("Welcome to our School! {0}", size) << std::endl;
}

School* School::operator+(const School* other)
{
	if (this != other)
		return new School(size + other->size);
	else
		return new School(size);
}

School School::operator+(const School& other)
{
	if (this != &other)
		return School(size + other.size);
	else
		return School(size);
}
