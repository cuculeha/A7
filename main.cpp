#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string modifyString (const string haystack, const string needle, const string replacement );

int main (){
	string haystack;
	string needle;
	string replacement;
	string modifiedHaystack;
	
	cout << "Source string ?";
	cin >> haystack;

	cout << "find ?";
	cin >> needle;

	cout << "Replacement string?";
	cin >> replacement;

	modifiedHaystack = modifyString (haystack, needle, replacement);

	cout << "\n\nSource string = " << haystack << endl;
	cout << "find = " << needle << endl;
	cout << "result = " << modifiedHaystack << endl;
	
return 0;
}

string modifyString (const string haystack, const string needle, const string replacement )
{
	string newHaystack;
	size_t needleLength;
	size_t needlePosition;

	// Make a copy
	newHaystack = haystack;
	
	needlePosition = transform(haystack.begin(), haystack.end(), haystack.begin(), ::toupper).find (transform(needle.begin(), needle.end(), needle.begin(), ::toupper));
	needleLength = needle.length ();

	// replace needle with replacemnent string for new haystack
	newHaystack.replace (needlePosition, needleLength, replacement);

	return newHaystack;
	
}
