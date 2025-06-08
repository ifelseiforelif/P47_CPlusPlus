#include "Student.h"

Student::Student()
{
	name = "No name";
	age = 18;
}

Student::Student(const std::string& name, short age)
{
	this->name = name;
	if (age < 0 || age > 100) {
		std::cout << "ERROR. Invalid age." << std::endl;
		this->age = 18; // Default age
	}
	else {
		this->age = age;
	}
}

short Student::getAge() const
{
	return age;
}

void Student::showStudent() const
{
	//this->age = this->age + 5; //ERROR: Cannot modify 'age' in a const method
	std::cout << "Name: " << name << ", Age: " << age << std::endl;
}

void Student::showStudent()
{
	this->age += 5;
	std::cout << "Name (no const): " << name << ", Age: " << age << std::endl;
}
