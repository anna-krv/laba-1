//Made by Anna Kravets, K-22
#include "functions.h"
#include <cmath>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

bool checkPrime(int x) {
	bool isPrime = true;
	int y = static_cast<int>(sqrt(x)) + 1;
	for (int xx = 2; xx <= y; xx++) {
		if (x%xx == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}

int maxPrime(int x) {
	while (!checkPrime(x))
		x--;
	return x;
}

void header() {
	cout << setw(8)<< "Interval"
		<< setw(14) << "Frequency" <<endl;
}

void printHistogram(const double* g, int numOfElem, double startPoint, double step) {
	header();
	for (int i = 0; i < numOfElem; i++) {
		cout << setw(1) << "[" << setw(4)  
			<< startPoint + i*step << ";"
			<< setw(4) 
			<< startPoint + (i + 1)*step << "]";
		cout<< setw(12)<<right<<g[i] << endl;
	}
}


int reverse(int n, const int m) {
	n = n%m;
	if (n == 1)
		return 1;
	vector<int> q;
	int r0 = m, r1 = n;
	while (r1 != 1) {
		q.push_back(r0 / r1);
		int r = r1;
		r1 = r0%r1;
		r0 = r;
	}
	int x = 1, y = -q.back(), s = q.size() - 2;
	while (s >= 0) {
		int z = x;
		x = y;
		y = z - x*q.at(s);
		s--;
	}
	int ans;
	if (y < m)
		ans = m - ((m - y) % m);
	else
		ans = y%m;
	return ans;
}