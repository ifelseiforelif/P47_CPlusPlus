#pragma once
#include <iostream>
class Student
{
	std::string name; //string ������������ ��� ��������� ����, ��� ����� ��������������� char* name!!!!
    /*mutable*/ short age;
public:
	Student();
	Student(const std::string& name, short age);
	short getAge() const; //������
	void showStudent() const;
	void showStudent();
};

