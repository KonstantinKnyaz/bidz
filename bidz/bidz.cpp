#include <iostream>
#include <clocale>
#include <string>

using namespace std;

short int obj = 0;

class Car {
private:
	string color{};
	string name{};
	double kg{};
public:
	Car(string color, string name, double kg) {
		this->color = color;
		this->name = name;
		this->kg = kg;
		cout << "Done" << endl;
	}
	void setAll(string color, string name, double kg) {
		this->color = color;
		this->name = name;
		this->kg = kg;
	}

	void getData() {
		cout << "Цвет: " << color << endl;
		cout << "Название: " << name << endl;
		cout << "Вес: " << kg << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");

	Car audi("Red", "Audi R8", 534.4);

	//audi.setAll("Red", "Audi R8", 534.4);
	audi.getData();

	Car reno("blue", "Reno Logan", 420.5);
	reno.getData();

	Car mercedes("Black", "Mercedes E5", 670.9);
	mercedes.getData();
	
	return 0;
}

