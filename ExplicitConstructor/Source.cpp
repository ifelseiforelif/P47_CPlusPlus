//implicit - неявний, explicit - явний
#include <iostream>
using namespace std;

class Meter
{
	double value;
	/*double value2;*/
public:
	explicit Meter(double m) :value(m) {}; 
	//explicit Meter(double m1=3.2, double m2=4.5) : value1(m1), value2(m2) {}; // неявний конструктор
	void print() const
	{
		cout << "meters: " << value/*+value2*/ << " m" << endl;
	}
};

void showInfo(Meter m)
{
	m.print();
}

Meter getMeter(double m)
{

	return Meter(m*100);
}

int main()
{
	/*Meter m1;
	m1.print();
	Meter m2(0.5);
	m2.print();
	Meter m3(1.2, 2.3);
	m3.print();*/

	/*showInfo(4.5);
	showInfo({ 4.5,5.6 });
	showInfo({});*/

	Meter m1(5.6); // явний виклик конструктора
	//showInfo(5.6);
	showInfo(m1);
	getMeter(5.6).print();

	return 0;
}