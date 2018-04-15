// Динамическоепрограммирование.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main()
{
	char buffer[80 + 1] = {};
	scanf_s("%80s", buffer);
	string s(buffer);
	int n = (int)s.size();
	s = ' ' + s;
	vector<vector<int>> count(1 + n, vector<int>(1 + n, 0));
	count[0][0] = 1;
	for (int len = 1; len <= n; len++) {
		for (int open = 0; open <= n; open++) {
			if (open - 1 >= 0 && (s[len] == '?' || s[len] == '(')) {
				count[len][open] += count[len - 1][open - 1];
			}
			if (open + 1 <= n && (s[len] == '?' || s[len] == ')')) {
				count[len][open] += count[len - 1][open + 1];
			}
		}
	}
	cout << count[n][0];
    return 0;
}

