//Made by Anna Kravets, K-22
#pragma once

//повертає ознаку того, що x - просте 
bool checkPrime(int x);

//повертає найбільше просте, що не перевищує x
int maxPrime(int x);

void printHistogram(const double* g, int numOfElem, 
	double startPoint, double step);

//pre: n!=0 mod m
//pre: m is prime
//повертає обернене до n по модулю m
int reverse(int n, const int m);