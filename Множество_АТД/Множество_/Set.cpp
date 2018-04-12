#include "Set.h"


Set::Set()
{
}

Set::Set(int n)
{
	S.resize(n);
}

Set::Set(vector <float> &s)
{
	set_S(s);
}

Set::~Set()
{
}

void Set::set_S(const vector <float> &s) 
{
	S = s;
}

vector <float> Set::get_S() const 
{
	return S;
}

void Set::sort_S()
{
	sort(S.begin(), S.end(), less<float>());
	sorted = true;
}

bool Set::empty()
{
	bool flag;

	if (S.size() == 0) flag = true;
	else flag = false;

	return flag;
}

float Set::mid_value() const 
{
	float Sum = 0;

	for (auto &s : S) 
	{
		Sum += s;
	}

	return Sum / S.size();
}

float Set::median() const 
{
	if (S.size() % 2 == 0)
	{
		return (S[S.size() / 2] + S[S.size() / 2 - 1]) / 2;
	}
	else 
	{
		return S[S.size() / 2];
	}
}

float Set::mode() const
{
	vector <float> count(10);

	for (auto i = 0; i < S.size(); i++) 
	{
		count[S[i]]++;
	}

	float max = count[0];
	float I = 0;

	for (auto i = 0; i < S.size(); i++) 
	{
		if (max < count[i]) 
		{
			max = count[i];
			I = i;
		}
	}

	return I;
}

float Set::dispersion() const
{
	float MatOj = 0;
	float Disp = 0;

	for (auto i = 0; i < S.size(); i++) 
	{
		MatOj += S[i] / S.size();
		Disp += pow(S[i], 2) / S.size();
	}

	Disp = Disp - pow(MatOj, 2); //Дисперсия

	return Disp;
}

Set Set::operator+(Set &s)
{	
	bool flag = true;
	vector <float> tmp(this->get_S());

	if (!this->sorted) this->sort_S();
	if (!s.sorted) s.sort_S();

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
	int i(0);
	int I(0);
	bool flag = true;
	vector <float> tmp;

	if (!this->sorted) this->sort_S();
	if (!s.sorted) s.sort_S();

	for (auto &s1 : this->get_S())
	{
		while (i < s.get_S().size())
		{
			if (s1 == s.get_S()[i])
			{
				I = i;
				I++;
				flag = false;
				break;
			}
			
			i++;
		}

		if (flag) tmp.push_back(s1);

		flag = true;

		i = I;
	}

	return Set(tmp);
}

Set Set::operator*(Set &s)
{
	int i(0);
	int I(0);
	bool flag = true;
	vector <float> tmp;

	if (!this->sorted) this->sort_S();
	if (!s.sorted) s.sort_S();

	for (auto &s1 : this->get_S())
	{
		while (i < s.get_S().size())
		{
			if (s1 == s.get_S()[i])
			{
				I = i;
				I++;
				flag = true;
				break;
			}
			else flag = false;

			i++;
		}

		if (flag) tmp.push_back(s1);

		flag = true;

		i = I;
	}

	return Set(tmp);
}

istream& operator>>(istream &in, Set &s) 
{
	for (auto i(0); i < s.get_S().size(); i++)
	{
		in >> s.get_S()[i];
	}

	return in;
}

ostream& operator<<(ostream &out, Set s)
{
	out << "{ ";
	for (auto &s : s.get_S()) {
		out << s << " ";
	}
	out << "}" << endl;

	return out;
}
