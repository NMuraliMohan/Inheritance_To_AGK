#include "Person.h"
#include "Tweeter.h"


int main()
{
	//Person some_person;  // The class must be in a valid state

//	Person murali("Murali", "N", 54);
//	murali.set_age(54);
	
	//	Person& ref_to_some_person = murali;

	//	ref_to_some_person.set_age(19);


		int x[5]{ 0, 1, 2, 3, 4 };
		Tweeter abhijith("Abhijith", "N", 19, 4, x);

		Person& ref_to_some_derived_class = abhijith;

		//ref_to_some_derived_class.set_age(54);
	





























	Person& ref_to_der_class_type = abhijith;
	ref_to_der_class_type.set_age(19);




	
	
	
}
