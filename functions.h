//Made by Anna Kravets, K-22
#pragma once

//������� ������ ����, �� x - ������ 
bool checkPrime(int x);

//������� �������� ������, �� �� �������� x
int maxPrime(int x);

void printHistogram(const double* g, int numOfElem, 
	double startPoint, double step);

//pre: n!=0 mod m
//pre: m is prime
//������� �������� �� n �� ������ m
int reverse(int n, const int m);