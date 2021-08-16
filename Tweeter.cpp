#include "Tweeter.h"

Tweeter::Tweeter(std::string first_name, std::string last_name, int age, int rating, int* likes) :
													Person(first_name, last_name, age),
													rating(rating),
													likes(new int[5])
{
	std::cout << "Tweeter::Tweeter constructor...." << '\n';
	
}

int Tweeter::get_rating()
{
	return rating;
}

void Tweeter::print_rating()
{
	std::cout << first_name << last_name << Person::age << '\n';
}

void Tweeter::set_age(int age)
{
	delete[] likes;
	std::cout << "In derived class Tweeter..." << '\n';
}

Tweeter::~Tweeter()
{
	std::cout << "Destructor of Tweeter is called!!!" << '\n';
}

