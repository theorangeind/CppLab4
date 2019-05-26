#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	string s;
	string result;

	cout << "Enter a sentence:\n";
	getline(cin, s);

	stringstream ss;
	ss << s;

	for (string word; ss >> word;)
	{
		reverse(word.begin(), word.end());
		result += word + " ";
	}
	reverse(result.begin(), result.end());
	result = result.substr(1, s.length());

	cout << "\nReversed:\n";

	cout << result << "\n";

	system("pause");
	return 0;
}