#include "Set.h"


Set::Set()
{
}

Set::Set(vector <unsigned int> &s)
{
	set_S(s);
}

Set::~Set()
{
}

void Set::set_S(const vector <unsigned int> &s)
{	
	bool flag = true;

	for (auto &s1 : s)
	{
		if (S.size() == 0) S.push_back(s1);
		for (auto &s2 : S)
			if (s1 == s2) 
			{
				flag = false;
				break;
			}

		if (flag) S.push_back(s1);
		flag = true;
	}
}

vector <unsigned int> Set::get_S() const
{
	return S;
}

void Set::sort_S()
{
	if (!sorted)
		sort(S.begin(), S.end(), less<unsigned int>());
	sorted = true;
}

bool Set::empty()
{
	bool flag;

	if (this->get_S().size() == 0) flag = true;
	else flag = false;

	return flag;
}

void Set::insert(const unsigned int num)
{
	bool flag = true;
	
	for (auto &s : S)
	{
		if (s == num) flag = false;
	}

	if (flag) S.push_back(num);
}

void Set::exclusion(const unsigned int num)
{
	bool flag = true;

	for (auto &s : S)
		if (s == num)
		{
			unsigned int tmp;
			tmp = S.back();
			s = tmp;
			S.pop_back();
			flag = false;
			break;
		}

	if (flag) throw elem_0 = 0;
}

Set Set::operator+(Set &s)
{	
	bool flag = true;
	vector <unsigned int> tmp(this->get_S());

	for (auto &s2 : s.get_S())
	{
		for (auto &s1 : this->get_S())
			if (s1 == s2)
			{
				flag = false;
				break;
			}

		if (flag) tmp.push_back(s2);
		flag = true;
	}

	return Set(tmp);
}

Set Set::operator-(Set &s)
{
	bool flag = true;
	vector <unsigned int> tmp;

	for (auto &s1 : this->get_S())
	{
		for (auto &s2 : s.get_S())
			if (s1 == s2)
				flag = false;

		if (flag) tmp.push_back(s1);
		flag = true;
	}

	return Set(tmp);
}

Set Set::operator*(Set &s)
{
	bool flag = true;
	vector <unsigned int> tmp;

	for (auto &s1 : this->get_S())
	{
		for (auto &s2 : s.get_S())
			if (s1 == s2)
			{
				flag = true;
				break;
			}
			else flag = false;

		if (flag) tmp.push_back(s1);
	}

	return Set(tmp);
}

ostream& operator<<(ostream &out, Set s)
{
	out << "{ ";
	for (auto &s : s.get_S()) 
	{
		out << s << " ";
	}
	out << "}" << endl;

	return out;
}

bool operator==(Set & s1, Set & s2)
{
	bool flag;

	if (!s1.sorted) s1.sort_S();
	if (!s2.sorted) s2.sort_S();

	if (s1.get_S().size() != s2.get_S().size()) 
		flag = false;
	else
	{
		for (auto &s1 : s1.get_S())
			for (auto &s2 : s2.get_S())
				if (s1 == s2)
				{
					flag = true;
					continue;
				}
				else flag = false;
	}
	return flag;
}

bool operator<=(Set & s1, Set & s2)
{
	bool flag = false;
	unsigned int size(0);

	for (auto &s1 : s1.get_S())
		for (auto &s2 : s2.get_S())
		{
			if (s1 == s2)
			{
				size++;
				break;
			}
		}
	
	if (size == s1.get_S().size()) flag = true;

	return flag;
}

bool operator>=(Set & s1, Set & s2)
{
	bool flag = false;
	unsigned int size(0);

	for (auto &s2 : s2.get_S())
		for (auto &s1 : s1.get_S())
		{
			if (s1 == s2)
			{
				size++;
				break;
			}
		}

	if (size == s2.get_S().size()) flag = true;

	return flag;
}
