#include <iostream>
#include <string>
using namespace std;

//4to takoe klass
//4to takoe ob'ekt klassa

//klass - eto 6ablon, kotoryj opisyvaet peremennyu
class Human //inicializacija klassa Human // class ~ pol'zovatel'skij tip dannyx
{
public: //modifikator dostupa // модификатор доступа
	string name; // polja klassa // поля класса
	int age;
	double weight;

};


class Point
{
public:
	int x;
	int y;
	int z;
};


int main()
{
	setlocale(LC_ALL, "rus");

	Human man; //man - ob'ekt klassa  

	man.age = 30;
	man.name = "Ivan";
	man.weight = 100.5;

	cout << man.name << endl;
	cout << man.age << endl;
	cout << man.weight << endl;

	cout << "################"<< endl;

	Human man2; //peremennaja tipa Human

	man2.age = 20;
	man2.name = "Oleg";
	man2.weight = 70;

	cout << man2.name << endl;
	cout << man2.age << endl;
	cout << man2.weight << endl;

	cout << "################" << endl;
	cout << "################" << endl;
	cout << "################" << endl;
	cout << "################" << endl;

	//Тип данных point, хранящий в себе координаты

	Point a;

	a.x = 1;
	a.y = 3;
	a.y = 4;

	return 0;
}