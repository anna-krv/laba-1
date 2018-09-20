//Made by Anna Kravets, K-22
#include "my_random.h"
#include <vector>
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
using namespace std;

const int maxNumber = 3981011;
const int m = maxPrime(maxNumber);
const int a = 74, c = 7, d = 3;
int x0Linear=38799, x0 = 4019, x1=34533;
double mu = 5.5, reservPolar = -100., aArens = 2.2;

int nextLinear() {
	x0Linear = (a*x0Linear + c) % m;
	return x0Linear;
}

double nextLinearDouble() {
	return static_cast<double>(nextLinear()) / m;
}

int nextSquare() {
	x0 = (abs(d*x0*x0 + a*x0 + c)) % m;
	return x0;
}

double nextSquareDouble() {
	return static_cast<double>(nextSquare())/m;
}

int nextFibbo() {
	x1 = (x0 + x1) % m;
	x0 = (m + x1 - x0) % m;
	return x1;
}

double nextFibboDouble() {
	return static_cast<double>(nextFibbo()) / m;
}

int nextReverse() {
	x0 = (a*reverse(x0, m) + c) % m;
	return x0;
}

double nextReverseDouble() {
	return static_cast<double>(nextReverse()) / m;
}

int nextCombination() {
	return abs((nextLinear()+ m - nextSquare())) % m;
}

double nextCombinationDouble() {
	return static_cast<double>(nextCombination()) / m;
}

double nextSigmaMethod() {
	double sum=0.;
	for (int i = 0; i < 12; i++) {
		sum += nextLinearDouble();
	}
	return sum-6.;
}


void set(double &v1, double &v2, double &s) {
	double u1 = nextLinearDouble(), u2 = nextLinearDouble();
	v1 = 2 * u1 - 1;
	v2 = 2 * u2 - 1;
	s = v1*v1 + v2*v2;
}

double nextPolar() {
	double ans;
	if (reservPolar != -100.) {
		ans= reservPolar;
		reservPolar  = -100.;
	}
	else {
		double s = 1., v1, v2;
		while (s >= 1.) {
			set(v1, v2, s);
		}
		ans = v1*sqrt(((-2)*log(s) / s));
		reservPolar = v2*sqrt(((-2)*log(s) / s));
	}
	return ans;
}


double nextFraction() {
	double u=0., v;
	while (u == 0.) {
		u = nextLinearDouble();
		v = nextLinearDouble();
	}
	double x = sqrt(8. / M_E)*(v-0.5)/u;
	if (x*x <= 5. - 4.*pow(M_E, 0.25)*u)
		return x;
	if (x*x >= 4 * pow(M_E, -1.35) / u + 1.4)
		return nextFraction();
	if (x*x <= -4.*log(u))
		return x;
	return nextFraction();
}


double nextLogarithmMethod() {
	double u = 0.;
	while (u == 0.)
		u = nextLinearDouble();
	return -mu*log(u);
}


double nextArens() {
	double u = nextLinearDouble();
	double y = tan(M_PI*u);
	double x = sqrt(2 * aArens - 1)*y + a - 1;
	if (x <= 0.)
		return nextArens();
	double v = nextLinearDouble();
	if (v > (1+ y*y) * exp( (a-1) * log( x/(a-1) ) - sqrt(2*a-1)*y ) )
		return nextArens();
	return x;
}