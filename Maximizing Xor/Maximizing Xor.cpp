// Maximizing Xor.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <map>
#include <set>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int maxXor(int l, int r) {
	int p = l ^ r, c = 0;
	while (p) {
		c++;
		p >> 1;
	}
	return pow(2, c) - 1;
}

int main() {
	int res;
	int _l;
	cin >> _l;

	int _r;
	cin >> _r;

	res = maxXor(_l, _r);
	cout << res;

	return 0;
}

