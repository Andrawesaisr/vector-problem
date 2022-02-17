// try3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<queue>
#include<iomanip>
#include<map>
#include<stack>
#include<bitset>
#include <cstring>
#include<cassert>
using namespace std;
int main() 
{
	int t, n,counter;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		vector<int>v(n);
		for (int i = 0; i < n; i++)
		{
			cin >> v[i];
		}
		counter = 0;
		vector<int>vec1;
		vector<int>vec2;
		for (int i = 0; i < n; i++)
		{
			if (v[i] % 2 == 0)
			{
				vec1.push_back(v[i]);
			}
			else
			{
				vec2.push_back(v[i]);
			}
		}
		if (is_sorted(vec1.begin(), vec1.end()) and is_sorted(vec2.begin(), vec2.end()))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

}
 