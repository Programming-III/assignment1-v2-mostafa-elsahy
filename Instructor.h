#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here
#include "Person.h"
using namespace std;

class Instructor : public Person{
private:
	string department;
	int experienceYears;
public:
	Instructor(string n, int i, string d, int e);
	Instructor();
	void display();
};
#endif
