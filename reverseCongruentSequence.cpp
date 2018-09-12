//Made by Anna Kravets, K-22
#include "my_random.h"
#include <iostream>
#include <vector>
using namespace std;

//pre: x>0
unsigned int reverse(unsigned int x) {
	vector<unsigned int> q, r;
	r.push_back(x);
	q.push_back(m / x);
	r.push_back(m%x);
	while (r.back() != 1) {
		unsigned int z = r.at(r.size() - 2);
		q.push_back(z / r.back());
		r.push_back(z % r.back());
	}
	unsigned int size = r.size();
	int a = 1, b = q.back();
	b = -b;
	for (unsigned int i = size - 2; i--; i >0) {
		int c = a;
		a = b;
		b = c - b*q.at(i);
	}
	unsigned int answer = (a - b*q.at(0)) % m;
	return answer;
}

unsigned int nextReverseCongruent(unsigned int x0) {
	return (a*reverse(x0)+c)%m;
}

void reverseCongruentSequence() {
	unsigned int x0 = 301117;
	double g[10] = {};
	for (int i = 0; i < nElem; i++) {
		x0 = nextReverseCongruent(x0);
		g[int(x0 * 10. / m)] += 1.;
	}
	for (int i = 0; i < 10; i++)
		g[i] = g[i] / nElem*100.;
	printArray(g, 10);

}
