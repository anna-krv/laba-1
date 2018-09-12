//Made by Anna Kravets, K-22
#include "my_random.h"
#include <iostream>
using namespace std;


unsigned int nextFibbo(unsigned int &x0, unsigned int &x1) {
	x1 = (x0 + x1) % m;
	x0 = (m+x1-x0) % m;
	return x1;
}

void fibboMethod() {
	double g[10] = {};
	unsigned int x0=33499, x1=345, x;
	for (int i = 0; i < nElem; i++) {
		x = nextFibbo(x0, x1);
		g[int(x * 10./m)] += 1.;
	}
	for (int i = 0; i < 10; i++)
		g[i] = g[i] / nElem*100.;
	printArray(g, 10);
}