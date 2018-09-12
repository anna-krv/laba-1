//Made by Anna Kravets, K-22
#include "my_random.h"
#include <iostream>
using namespace std;

unsigned int nextSquare(unsigned int x0) {
	return (d*x0*x0 + a*x0 + c) % m;
}

void squareCongruentMethod() {
	double g[10] = {};
	unsigned int x0 = 3;
	for (int i = 0; i < nElem; i++) {
		x0 = nextSquare(x0);
		g[int( x0* 10./m)] += 1.;
	}
	for (int i = 0; i < 10; i++)
		g[i] = g[i] / nElem*100.;
	printArray(g, 10);
}
