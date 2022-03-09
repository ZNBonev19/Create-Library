// MathLibrary.cpp : Defines the functions for the static library.
//
#include <iostream>

#include "pch.h"
#include "framework.h"
#include "MathLibrary.h"

using namespace std;

// TODO: This is an example of a library function

float perimeter(float aSide, float bSide, float cSide)
{
	return aSide + bSide + cSide;
}

float plot(float side, float height)
{
	return (side * height) / 2;
}