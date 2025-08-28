#include "Student.hpp" 	

Student::Student() 
{
	cout << "Created\n";
}

Student::~Student() {
}

void Student::setName(string n) {
	name = n;
}

void Student::setAge(int a) {
	age = a;
}

string Student::getName() const {
	return name;
}

int Student::getAge() const {
	return age;
}
