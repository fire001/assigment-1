#include "MathUtilities.hpp"
#include <iostream>



MathUtilities::MathUtilities()
{
}


MathUtilities::~MathUtilities()
{
}

float MathUtilities::Converter(int)
{
	intToFloat = (float)roundf(floatToInt);
	std::cout << intToFloat << std::endl;
	return intToFloat;
}

float MathUtilities::Round(int)
{
	redondear = round(x / 2) * 2;
	return 0.0f;
}


float MathUtilities::Compare(int)
{
	template <MathUtilities Compare>
	
	Compare GetMax(Compare a, Compare b)
	{
		if (a > b)
			int compareResult = (a > b ? a : b);
			return int compareResult ;
		else
			if (a < b)
				return b;
	}
}

float MathUtilities::Clamp(int)
{
#define clamp(x, minx, maxx);
	{
		if x < minx;
		return minx
	}
	else if 
	{
		x > maxx
			return maxx;
	}
	else
	{
	return x;
	}
}

float MathUtilities::Angle(double)
{
	void pausa();
	char tecla;
	do

	{

		system("cls");
		std::cout << "1. degree" << std::endl;
		std::cout << "2. radian" << std::endl;
		std::cout << "elegir" << std::endl;
		do
		{
		std::cin >> tecla;

	} while (tecla < 1 || tecla > 2);

	switch (tecla)
	{
	case '1':
		system("cls");
		// degree to radian
		float degree, radian;
		std::cout << "degree:" << std::endl;
		std::cin >> degree;
		radian = (degree*3.14) / 180;
		std::cout << "radian:" << radian;
		pausa();
		break;

	case '2':
		system("cls");
		//radian to degree
		std::cout << "radian:" << std::endl;
		std::cin >> radian;
		degree = (radian * 180) / 3.14;
		std::cout << "degree:" << degree;
		pausa();
		break;
	}

} while (tecla != 3);
	return 0;

}

float MathUtilities::Distance(double)
{

}


