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
<<<<<<< HEAD
	Set(const vector <float> &s);
=======
	Set(const vector <unsigned int> &s);
>>>>>>> great
	~Set();

	void set_S(const vector <float> &s);

	vector <float> get_S() const;

	void sort_S();

	bool empty() const;

	unsigned int size() const;

	void insert(const float num);

<<<<<<< HEAD
	void exclusion(const float num);

	Set operator+(const Set &s) const;

	Set operator-(const Set &s) const;

	Set operator*(const Set &s) const;
	
	bool operator==(const Set &s) const;

	bool operator<=(const Set &s) const;

	bool operator>=(const Set &s) const;

	bool operator[](const float num) const;
=======
	Set operator+(const Set &s) const;

	Set operator-(const Set &s) const;

	Set operator*(const Set &s) const;
	
	bool operator==(const Set &s) const;

	bool operator<=(const Set &s) const;

	bool operator>=(const Set &s) const;

	bool operator[](const unsigned int num) const;

	friend ostream& operator<<(ostream &out, const Set s);
>>>>>>> great

	int size_ex;
	int elem_ex;
	int sign_ex;
	int type_ex;
};