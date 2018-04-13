#include "Set.h"
#include <vector>
#include <iostream>


using namespace std;
enum error {size_0};

int main()
{
	Set S;
	Set S1;
	Set S2;
	Set S3;
	Set S4;
	Set S5(5);

	vector <float> s1 = { 1, 2, 1, 3, 1, 5, 4, 6, 5 };
	vector <float> s2 = {1, 4, 2, 3, 7, 1, 8, 5};

	S.set_S(s1);
	S1.set_S(s2);

	S.sort_S();
	S1.sort_S();

	cout << S;
	
	cout << S1;

	/*try 
	{*/
		cout << "Mid_Value = " << S.mid_value() << endl;

		cout << "Median = " << S.median() << endl;

		cout << "Mode = " << S.mode() << endl;

		cout << "Dispersion = " << S.dispersion() << endl;
	/*}
	catch (const error message)
	{
		cout << "Set is empty" << endl; 
	}*/
	
	S2 = S + S1;

	cout << S2;
	
	S3 = S * S1;
	
	cout << S3;

	S4 = S - S1;

	cout << S4;

	system("pause");
	return 0;
}