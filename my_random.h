//Made by Anna Kravets, K-22
#pragma once
#include <cmath>
#include "E:\2 курс\Lab1\functions\functions.h"
#include <iostream>
using namespace std;
const int maxNumber =738011;
const int m = maxPrime(maxNumber);
const int nElem = 100000;
const int a = 34, c = 7, d = 3;

//генерує наступне псевдовипадкове число 
//одним з відповідних методів
//повертає згенероване число
int nextLinear();
double nextLinearDouble();
int nextSquare(int x0);
int nextFibbo(int& x0, int& x1);
int nextReverseCongruent(int x0);
int nextCombination(int &x, int &y);
double nextSigmaMethod(int &x);
double nextPolar();
double nextFraction();
double nextLogarithmMethod();
double nextArens();