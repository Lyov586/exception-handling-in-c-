#include <iostream> 
//exception handling in c++
using namespace std;

int main()
{
	int numerator, denominator, result;
	cout << " Enter numerator and denominator"<< endl;
	cin >> numerator>>denominator;
	try
	{
		if(denominator == 0)
		{
			throw denominator;
		}
		 result = numerator/denominator;//division happens here
	}

	catch(int ex)
	{
		cout<<"Exception: Divide by zero not allowed "<< ex <<endl;
	}

	cout<<"Division is: " << result << endl;

	return 0;
}
