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
	Set(const vector <unsigned int> &s);
	~Set();

	void set_S(const vector <unsigned int> &s);

	vector <unsigned int> get_S() const;

	void sort_S();

	bool empty() const;

	void insert(const unsigned int num);

	void exclusion(const unsigned int num);

	Set operator+(const Set &s) const;

	Set operator-(const Set &s) const;

	Set operator*(const Set &s) const;
	
	bool operator==(const Set &s) const;

	bool operator<=(const Set &s) const;

	bool operator>=(const Set &s) const;

	bool operator[](const unsigned int num) const;

	friend ostream& operator<<(ostream &out, const Set s);

	int size_0;
	int elem_0;
};