//Made by Anna Kravets, K-22
#include "my_random.h"
#include <iostream>
using namespace std;



unsigned int nextLinear(unsigned int x0) {
	return (a*x0 + c) % m;
}

void linearCongruentMethod() {
	unsigned int x0 = 331;
	double g[10] = {};
	for (int i = 0; i < nElem; i++) {
		x0 = nextLinear(x0);
		g[int(x0 * 10./m)] += 1.;
	}
	for (int i = 0; i < 10; i++)
		g[i] = g[i] / nElem*100.;
	printArray(g, 10);
}
