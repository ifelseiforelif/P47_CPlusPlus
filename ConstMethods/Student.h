#pragma once
#include <iostream>
class Student
{
	std::string name; //string використовую для спрощення кода, Вам треба використовувати char* name!!!!
    /*mutable*/ short age;
public:
	Student();
	Student(const std::string& name, short age);
	short getAge() const; //Геттер
	void showStudent() const;
	void showStudent();
};

