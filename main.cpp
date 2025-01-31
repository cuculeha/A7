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
	string newHaystack;                  // New modified haystack
	string upper_haystack;               // Haystack with uppercase letters
	string upper_needle;                 // Needle with uppercase letters
	size_t needleLength;                 // To find needle length
	size_t needlePosition;               // To find needle position

	// Make a copy
	newHaystack = haystack;
	upper_haystack = haystack;
	upper_needle = needle;
	
	// make haystack and needle uppercase
	transform(upper_haystack.begin(), upper_haystack.end(), upper_haystack.begin(), ::toupper);
    	transform(upper_needle.begin(), upper_needle.end(), upper_needle.begin(), ::toupper);

	needlePosition = upper_haystack.find (upper_needle);
	needleLength = needle.length ();

	// replace needle with replacemnent string for new haystack
	newHaystack.replace (needlePosition, needleLength, replacement);

	return newHaystack;
	
}
