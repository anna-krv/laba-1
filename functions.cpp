//Made by Anna Kravets, K-22
#include "functions.h"
#include <cmath>
#include <iostream>
using namespace std;

bool checkPrime(unsigned int x) {
	bool isPrime = true;
	unsigned int y = sqrt(x) + 1;
	for (unsigned int xx = 2; xx <= y; xx++) {
		if (x%xx == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

unsigned int maxPrime(unsigned int x) {
	while (!checkPrime(x))
		x--;
	return x;
}


void printArray(const double* g, int numOfElem) {
	for (int i = 0; i < numOfElem; i++) {
		cout << g[i] << ' ';
	}
	cout << endl;
}