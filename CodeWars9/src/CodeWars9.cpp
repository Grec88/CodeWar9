//============================================================================
// Name        : CodeWars9.cpp
// Author      : grec88
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class DigPow
{
public:
  static int digPow(int n, int p){
	string temp  = to_string(n);
	int sum = 0;
	for(const auto& c : temp){
		int buff = (int)c - 48;
		sum += pow(buff, p);
		++p;
	}
	int result = sum / n;
	if((sum / (double)n - result) != 0){
		return -1;
	}
	return result;
  }
};

int main() {
	DigPow test;
	cout << test.digPow(114, 3);
	return 0;
}
