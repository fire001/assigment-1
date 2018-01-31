#pragma once

#include <math.h>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <cstdlib>

int redondear;
double x;
int Max;
int a, int b;
int compareResult;
double p1, p2, y;
class MathUtilities
{
public:
	float intToFloat;
	int floatToInt;

	MathUtilities();
	~MathUtilities();

	float Converter(int);
	float Round(int);
	float Compare(int);
	float Clamp(int);
	float Angle(double);
	float Distance(double);
};

