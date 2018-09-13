//Made by Anna Kravets, K-22
#include "my_random.h"
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;


int nextSquare(int x0) {
	return abs((d*x0*x0 + a*x0 + c)) % m;
}

int nextFibbo(int &x0, int &x1) {
	x1 = (x0 + x1) % m;
	x0 = (m + x1 - x0) % m;
	return x1;
}

int nextReverseCongruent(int x0) {
	return (a*reverse(x0, m) + c) % m;
}

int nextCombination(int &x, int &y) {
	x = nextLinear();
	y = nextSquare(y);
	return (x+m - y) % m;
}

double nextSigmaMethod(int &x) {
	double sum=0.;
	for (int i = 0; i < 12; i++) {
		sum += nextLinearDouble();
	}
	return sum-6.;
}


double reserv = -1.;

void set(double &u, double &v) {
	u = nextLinearDouble();
	v = nextLinearDouble();
}

double nextPolar() {
	if (reserv >= 0.) {
		double ans = reserv;
		reserv = -1.;
		return ans;
	}
	double s = 1., u1, u2, v1, v2;
	while (s >= 1.) {
		set(u1, u2);
		v1 = 2 * u1 - 1; 
		v2 = 2 * u2 - 1;
		s=v1*v1 + v2*v2;
	}
	double x1 = v1*sqrt(((-2)*log(s) / s)), x2 = v2*sqrt(((-2)*log(s) / s));
	reserv = x2;
	return x1;
}


double nextFraction() {
	double u, v;
	set(u, v);
	while (u == 0.)
		set(u, v);
	double x = sqrt(8. / M_E)*(v-0.5)/u;
	if (x*x <= 5. - 4.*pow(M_E, 0.25)*u)
		return x;
	if (x*x >= 4 * pow(M_E, -1.35) / u + 1.4)
		return nextFraction();
	if (x*x <= -4.*log(u))
		return x;
	return nextFraction();
}

double mu = 6;

double nextLogarithmMethod() {
	double u = nextLinearDouble();
	while (u == 0.)
		u = nextLinearDouble();
	return -mu*log(u);
}

double nextArens() {
	return 0.;
}