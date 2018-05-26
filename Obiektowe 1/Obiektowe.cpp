#include <iostream>
#include "Point.h"

using namespace std;


int main()
{
	//std::cout << "Costam" << std::endl;
	float m, n;

	cout << "Costam" << endl;//cout to objekt a nie funkcja(operacja wyjscia)

	CPoint my_first_point; // cout sie odpali za kazdymm wywolaniem

	cout << sizeof(my_first_point)<<endl;//bo dwa floaty

	my_first_point.set_cor_x(7.77);
	my_first_point.set_cor_y(5.37);
	cout << "Coordinate X = " << my_first_point.get_cor_x() << endl;
	cout << "Coordinate Y = " << my_first_point.get_cor_y() << endl<<endl<<endl;

	CPoint my_point(3.33, 9.88);
	cout << "Coordinate X = " << my_point.get_cor_x() << endl;//tu nazwa inna pamietaj
	cout << "Coordinate Y = " << my_point.get_cor_y() << endl;

	cout << "odleglosc od srodka ukladu to: " << my_point.distance() << endl;

	cout << "odleglosc punktow to: " << my_point.distance_2(my_first_point);



	cin >> m >> n;
	cout << endl << endl << endl;
	CPoint my_point2(m, n);
	cout << "Coordinate X = " << my_point2.get_cor_x() << endl;//tu nazwa inna pamietaj
	cout << "Coordinate Y = " << my_point2.get_cor_y() << endl;

	int aaa;
	cout << "Wprowadz wartosc aaa: " << endl;
	cin >> aaa;
	cout << "Wartosc to: " << aaa << endl;

	system("PAUSE");
	return 0;
}