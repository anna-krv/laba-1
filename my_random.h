//Made by Anna Kravets, K-22
#pragma once
#include <cmath>
#include "E:\2 курс\Lab1\functions\functions.h"
#include <iostream>
using namespace std;
const int nElem = 100000;



//генерує наступне псевдовипадкове число 
//одним з відповідних методів
//повертає згенероване число

int nextLinear();
double nextLinearDouble();

int nextSquare();
double nextSquareDouble();

int nextFibbo();
double nextFibboDouble();

int nextReverse();
double nextReverseDouble();

int nextCombination();
double nextCombinationDouble();

double nextSigmaMethod();
double nextPolar();
double nextFraction();
double nextLogarithmMethod();
double nextArens();