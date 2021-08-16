#include "Person.h"

Person::Person(std::string first_name, std::string last_name, int age) : first_name(first_name), last_name(last_name), age(age)
{
		std::cout << "Person::Person constructor...." << '\n';
}

//void Person::set_age(int age)
//{
//	std::cout << "In parent class Person..." << '\n';
//	this->age = age;
//}

Person::~Person()
{
	std::cout << "Destructor of Person is called!!!" << '\n';
}
