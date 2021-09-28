#include<iostream>
#include<string>
using namespace std;
string reverseString(string& str)
{
	int len = str.length();
	int temp;
	for (int i = 0, j = len - 1; i < len / 2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
	return str;
}
int main()
{
	string str;

	cout << "Enter a string: ";
	getline(cin, str);
	cout << "The String Before Reversing is = " << str << endl;
	reverseString(str);
	cout << "The String After Reversing is = " << str << endl;

	system("pause");
	return 0;
}