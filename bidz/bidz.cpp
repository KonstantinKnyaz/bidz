#include <iostream>
#include <clocale>
#include <string>

using namespace std;

template <typename Type, typename Type2>
class Human {
private:
	Type Health;
	Type2 name;
public:
	Human (Type Health, Type2 name) {
		this->Health = Health;
		this->name = name;
	}

	void printHealth() {
		cout << Health << endl;
	}

	Type getHealth() {
		return Health;
	}

	Type2 getname() {
		return name;
	}
};


int main() {
	setlocale(LC_ALL, "Russian");

	
	Human<int, char> jack(100, 'J');
	cout << jack.getHealth() << endl;
	jack.printHealth();
	cout << jack.getname() << endl;

	return 0;
}


//short int obj = 0;
//
//class Car {
//private:
//	string color{};
//	string name{};
//	double kg{};
//public:
//	Car(string color, string name, double kg) {
//		this->color = color;
//		this->name = name;
//		this->kg = kg;
//		cout << "Done" << endl;
//	}
//	void setAll(string color, string name, double kg) {
//		this->color = color;
//		this->name = name;
//		this->kg = kg;
//	}
//
//	void getData() {
//		cout << "Цвет: " << color << endl;
//		cout << "Название: " << name << endl;
//		cout << "Вес: " << kg << endl;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Car audi("Red", "Audi R8", 534.4);
//
//	//audi.setAll("Red", "Audi R8", 534.4);
//	audi.getData();
//
//	Car reno("blue", "Reno Logan", 420.5);
//	reno.getData();
//
//	Car mercedes("Black", "Mercedes E5", 670.9);
//	mercedes.getData();
//
//	return 0;
//}


//class Message {
//private:
//	string message = "Привет, меня зовут ";
//public:
//	void name(string name) {
//		cout << message + name;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Message my;
//	my.name("Василий");
//
//	return 0;
//}

//class Message {
//private:
//	string message = "Привет, меня зовут ";
//public:
//	string name(string name) {
//		return message + name;
//	}
//};
//
//int main()
//{
//	setlocale(LC_ALL, "Russian");
//
//	Message my;
//	cout << my.name("Василий");
//
//	return 0;
//}

//class Player;
//class Enemy {
//	friend class Player;
//private:
//	int health = 100;
//public:
//
//	void Uron(Player& pl);
//};
//
//class Player {
//	friend class Enemy;
//private:
//	int health = 100;
//public:
//
//	void Uron(Enemy& e) {
//		e.health -= 10;
//		cout << "Enemy now has " << e.health << " lifes." << endl;
//	}
//};
//
//void Enemy::Uron(Player& pl) {
//	pl.health -= 10;
//	cout << "Player now has " << pl.health << " lifes." << endl;
//}
//
//int main() {
//
//	Enemy monstr;
//	Player main_player;
//	monstr.Uron(main_player);
//	main_player.Uron(monstr);
//
//	return 0;
//}


// class House {
// private:
// 	int height, floors, year;
// 	char color;
// 	float averagePeopleOnFloor;
// 	bool isStillWorking = true;
// public:
// 	House(int heigth, int floors, int year) {
// 		this->height = height;
// 		this->floors = floors;
// 		this->year = year;
// 	}

// 	House(int heigth, int floors, int year, bool isStillWorking) {
// 		this->height = height;
// 		this->floors = floors;
// 		this->year = year;
// 		this->isStillWorking = isStillWorking;
// 	}

// 	void getInfo() {
// 		cout << "Height: " << height << endl;
// 		cout << "Floors: " << floors << endl;
// 		cout << "Is still working: " << isStillWorking << endl;
// 	}
// };

// int main() {
// 	setlocale(LC_ALL, "Russian");

// 	House dom(90, 2, 5);
// 	dom.getInfo();

// 	House dacha(85, 2, 15, 0);
// 	dacha.getInfo();
// 	return 0;
// }


// class Mclas {
// protected:
// 	int a;	
// };

// class Sclas : public Mclas{
// private:
	
// public:
// 	void getInfo(int val) {
// 		this->a = val;
// 		cout << a << endl;
// 	}
// };


// int main() {
// 	setlocale(LC_ALL, "Russian");

// 	Sclas duty;
// 	duty.getInfo(5);

// 	return 0;
// }

// class Mclas {
// private:
// 	int a;	
// 	friend class Sclas;
// };

// class Sclas : public Mclas{
// private:
	
// public:
// 	void getInfo(int val) {
// 		this->a = val;
// 		cout << a << endl;
// 	}
// };


// int main() {
// 	setlocale(LC_ALL, "Russian");

// 	Sclas duty;
// 	duty.getInfo(5);

// 	return 0;
// }


// class Car {
// public:
// 	int weight;
// 	string model;
// 	string color;
// 	float speed;

// 	void outPut() {
// 		cout << "Вес " << model << " составляет " << weight << "кг." << endl;
// 		cout << "Цвет машины - " << color << " и её скорость - " << speed << endl;
// 	}
 
// 	Car(int w, string m, string c, float s) {
// 		this->weight = w;
// 		this->model = m;
// 		this->color = c;
// 		this->speed = s;
// 	}
 
// 	Car() {}
// };


// class Bigcar : public Car {
// public: 
// 	int wheel = 12;
// 	int maxW = 5;

// 	Bigcar(int w, string m, string c, float s, int maxW) : Car(w, m, c, s) {
// 		this->maxW = maxW;
// 	}

// 	void newWheels(int w) {
// 		wheel = w;
// 		cout << "Новое количество колёс: " << wheel << endl;
// 	}
// };


// int main() {
// 	setlocale(LC_ALL, "Russian");

// 	Car mers(50, "A", "Red", 250);

// 	Bigcar zil(70, "Bb", "Blue", 210, 3000);

// 	zil.newWheels(20);

	


// 	return 0;
// }