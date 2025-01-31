#include <string>
#include <iostream>

int findNeedle (string haystack, string needle );
void ReplaceString (string &haystack, string needle, string replacement );
using namespace std;

int main (){
	string haystack;
	string needle;
	int needleFound;
	string toReplace;

	char choice;

	cout << "Source string? ";
	cin >> haystack

	cout << "\find?";
	cin >> needle;

	// Check if the needle found in haystack
	needleFound = findNeedle (string haystack, string needle)
		
	while ( needleFound == -1 );
	{
		cout << "Invalid string to replace. Enter another string to find\n";
		cin >> needle;
		
		needleFound = findNeedle (string haystack, string needle)
	}
	
	cout << "replacement string";
	cin >> toReplace;

	ReplaceString ( &haystack, needle, replacement );
	}
	
return 0;
}


int findNeedle (string haystack, string needle )
{
	size_t position;
	
	// Check if the needle found in haystack
	position = strSentence.find (toSearch);


	if (position == string::npos)
	{
		return -1;
	}
	
	return position;
}


void ReplaceString (string &haystack, string needle, string replacement )
{
	size_t length;
	
	// check for how many words to replace
	length = needle.length();
	
	//replace the string
	strSentence.replace (position, length, toReplace);

	cout << "The new string now is :\n";
	cout << strSentence ;
	
	cout << "\nDo you want to modify the string again?\n";
	cout << "Enter any key to continue. And Q to quit\n";
	cin.ignore();
	choice = cin.get();	
}
