#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Set {

	vector <float> S;
	bool sorted;
	
public:
	Set();
	//Set(int n);
	Set(vector <float> &s);
	~Set();

	void set_S(const vector <float> &s);

	vector <float> get_S() const;

	void sort_S();

	bool empty();

	//float mid_value();

	//float median();

	//float mode();

	//float dispersion();

	Set operator+ (Set &s);

	Set operator- (Set &s);

	Set operator* (Set &s);

	//friend istream& operator>>(istream &in, Set &s);

	friend ostream& operator<<(ostream &out, Set s);

	int size_0;
};