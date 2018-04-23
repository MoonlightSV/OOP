#include "Set.h"
#include <vector>
#include <iostream>


using namespace std;

int main()
{
	Set S;
	Set S1;
	Set S2;
	Set S3;
	Set S4;

	vector <unsigned int> s1 = { 1, 2, 1, 4, 1, 5, 3, 6, 5 };
	vector <unsigned int> s2 = { 1, 4, 2, 3, 7, 1, 8, 5 };

	S.set_S(s1);
	S1.set_S(s2);

	cout << S;
	
	cout << S1;
	
	S2 = S + S1;

	cout << "+ " << S2;
	
	S3 = S * S1;
	
	cout << "* " << S3;

	S4 = S - S1;

	cout << "- " << S4;

	S.insert(7);

	cout << S;

	try
	{
		S1.exclusion(5);
		S1.exclusion(8);
	}
	catch (int elem_0)
	{
		cout << "In set there is no such element" << endl;
	}

	cout << S1;

	if (S == S1) cout << "Sets are equal" << endl;
	else cout << "Sets are not equal" << endl;

	if (S <= S1) cout << "Set is a subset" << endl;
	else cout << "Set is not a subset" << endl;

	if (S >= S1) cout << "Set is a subset" << endl;
	else cout << "Set is not a subset" << endl;

	system("pause");
	return 0;
}