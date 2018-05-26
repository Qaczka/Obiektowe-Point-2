#pragma once
#include "point.h"
#include <iostream>

CPoint::CPoint()
{
	//za kazdym wywolaniem sie odpali od Pointa
	std::cout << "Dziala konstruktor klasy point bez argumentu" << std::endl; // jak nie dziala to build >> rebuild solution
	cor_x = 0;
	cor_y = 0;
}

CPoint::CPoint(float a, float b) {
	std::cout << "Dziala konstruktor klasy point z argumentami" << std::endl; // jak nie dziala to build >> rebuild solution
	if (a > 0 && b > 0)
	{
		std::cout << "Punkt lezy w pierwszej cwiartce." << std::endl;
		cor_x = a;
		cor_y = b;
	}
	else
	{
		std::cout << "Punkt nie lezy w pierwszej cwiartce." << std::endl;
		//CPoint();  BO NIE MOZNA INNEGO KONSTRUKTORA W INNYM
		if (a < 0)
		{
			cor_x = 0;
		}
		else
		{
			cor_x = a;
		}
		if (b < 0)
		{
			cor_y = 0;
		}
		else
		{
			cor_y = b;
		}
	}

}

/*
CPoint::CPoint(float a, float b) :cor_x(a), cor_y(b) {
std::cout << "Dziala konstruktor klasy point z argumentami" << std::endl; // jak nie dziala to build >> rebuild solution
if (a > 0 && b > 0)
{
std::cout << "Punkt lezy w pierwszej cwiartce." << std::endl;
}
else
{
std::cout << "Punkt nie lezy w pierwszej cwiartce." << std::endl;
CPoint();
}

}
//tu sa operacje/implementacje klasy

*/

void CPoint::set_cor_x(float a)
{
	cor_x = a;
}
void CPoint::set_cor_y(float b)
{
	cor_y = b;
}

float CPoint::get_cor_x()
{
	return cor_x;
}
float CPoint::get_cor_y() 
{
	return cor_y;
}

float CPoint::distance()
{
	return sqrtf(cor_x*cor_x+cor_y*cor_y);
}

float CPoint::distance_2(CPoint a)
{
	return sqrt(powf(cor_x - a.cor_x, 2) + powf(cor_y - a.cor_y, 2));
}
