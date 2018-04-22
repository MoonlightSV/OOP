#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

class Set {

	vector <unsigned int> S;
	bool sorted;
	
public:
	Set();
	Set(vector <unsigned int> &s);
	~Set();

	void set_S(const vector <unsigned int> &s);

	vector <unsigned int> get_S() const;

	void sort_S();

	bool empty();

	void insert(const unsigned int num);

	void exclusion(const unsigned int num);

	Set operator+ (Set &s);

	Set operator- (Set &s);

	Set operator* (Set &s);

	friend ostream& operator<<(ostream &out, Set s);

	friend bool operator==(Set &s1, Set &s2);
	friend bool operator>=(Set &s1, Set &s2);
	friend bool operator<=(Set &s1, Set &s2);

	int size_0;
	int elem_0;
};