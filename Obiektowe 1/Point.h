#pragma once//daje to ze kompiluje sie tylko raz

//tutaj sa deklaracje klasy

class CPoint { //C dla klas S dla struktur
	float cor_x;
	float cor_y; // PAMIETAJ ZEBY ATRYBUTY NIE BYLY PUBLICZNE

public://interfejs
	CPoint(); //ma sie wywolac za kazdym wywolaniem >> point.cpp
	CPoint(float, float);

	void set_cor_x(float);
	void set_cor_y(float);

	float get_cor_x();
	float get_cor_y();

	float distance();

	float distance_2(CPoint);


};
