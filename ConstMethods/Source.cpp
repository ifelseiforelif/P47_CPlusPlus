#include <iostream>
#include "Student.h"

int main()
{
	const Student student1;
	student1.showStudent();
	const Student student2("Alice", 20);
	student2.showStudent();
	Student student3("Bob", -5); // Invalid age
	student3.showStudent();
	return 0;
}
