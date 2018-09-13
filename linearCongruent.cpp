//Made by Anna Kravets, K-22
#include "my_random.h"

int x0 = 34011;

int nextLinear() {
	x0 = (a*x0 + c) % m;
	return x0;
}

double nextLinearDouble() {
	x0 = nextLinear();
	return static_cast<double>(x0) / m;
}