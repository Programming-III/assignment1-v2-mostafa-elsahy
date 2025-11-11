#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;

// ==================== Person Class Implementation =========================
Person::Person(string n, int i)
{
	name = n;
	id = i;
}

Person::Person(){}

Person::display()
{
	cout << "Name: " << name << endl << "Id: " << id;
}

Person::getName(){
	return name;
}

Person::~Person(){}

// ==================== Student Class Implementation ====================

Student::Student(string n, int i, int y, int m) : Person(n, i)
{
	yearLevel = y;
	major = m;
}


Student::Student(){}

Student::display()
{
	cout <<  "Student Info:" << endl << "Name: " << getName << endl << "Major " << major << "Year " << yearLevel;
}


// ==================== Instructor Class Implementation ====================
Instructor::Instructor(string n, int i, string d, int e) : Person(n, i)
{
	department = d;
	experienceYears = e;
}
Instructor:: Instructor(){}
Instructor::display()
{
	cout << "Instructor Info: " << endl << "Name: Dr. " << getName << endl << "Department: " << department << endl << "Experience" << experienceYears;
}




// ==================== Course Class Implementation ====================
Course::Course(string code, string name, int max)
{
	courseCode  = code;
	courseName = name;
	maxStudents = max;
	students = new Student[max];
	currentStudents = 0;
}
Course::addStudent(const Student& s){
	if (currentStudents != maxStudents)
	{
		students[currentStudents] == s;
		currentStudents++;
	}
	else{
		cout << "Course is Full" << endl;
	}
}
Course :: displayCourseInfo()
{
	cout << "Course: " << courseCode << " " << courseName << endl << "Max Students" << maxStudents << "Currently Enrolled" << endl;
	for(int i = 0; i < maxStudents; i++)
	{
		cout << students[i].getName() << student[i].getId();
	}
}

Course :: ~Course(){
	delete [] students;
}




int main() {
	Student s ("Mostafa", 1600, 2, "CS");
	Instructor I ("Mostafa", 121, "CS", 12);
	Course C 
}

