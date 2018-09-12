//Made by Anna Kravets, K-22
#pragma once
#include <cmath>
#include "E:\2 курс\Lab1\functions\functions.h"
#include <iostream>
using namespace std;
const unsigned int maxNumber = 9013728;
const unsigned int m = maxPrime(maxNumber);
const int nElem = 100000;
const unsigned int a = 34, c = 617, d = 33;

unsigned int reverse(unsigned int x);

//генерує наступне псевдовипадкове число 
//одним з відповідних методів
//повертає згенероване число
unsigned int nextLinear(unsigned int x0);
unsigned int nextSquare(unsigned int x0);
unsigned int nextFibbo(unsigned int& x0, unsigned int& x1);
unsigned int nextReverseCongruent(unsigned int x0);


void linearCongruentMethod();
void squareCongruentMethod();
void fibboMethod();
void reverseCongruentSequence();