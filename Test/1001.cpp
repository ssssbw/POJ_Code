#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double num;
	int exp;
	while(cin >> num >> exp)
	{
		cout << pow(num,exp) << endl;
	}
	return 0;
}
