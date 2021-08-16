#pragma once
#include "Person.h"
class Tweeter : public Person
{
private:
	int rating;
	int* likes;
public:
	Tweeter(std::string first_name, std::string last_name, int age, int rating, int * likes);
	~Tweeter();
	int get_rating();
	//int get_likes();
	//int get_hearts();

	void print_rating();
	void set_age(int age) override;
};

