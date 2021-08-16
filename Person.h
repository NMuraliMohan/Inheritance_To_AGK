#pragma once
#include <iostream>
class Person
{
protected:
	std::string first_name;
	std::string last_name;
	int age;

public:
	Person(std::string first_name, std::string last_name, int age);
	virtual ~Person();
	virtual void set_age(int age) = 0;    // Pure virtual functions
};

