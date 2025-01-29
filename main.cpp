#include <string>
#include <iostream>

using namespace std;

int main (){
	string toSearch;
	string toReplace;
	string strSentence = "My name is Saliha Babar"; 
	size_t position;
	size_t length;
	char choice;
	
	do {
	
	cout << "Here is the string\n";
	cout << strSentence << '\n';
	cout << "Enter word to replace\n";
	cin >> toSearch;
	
	// find the word.
	position = strSentence.find (toSearch);
	
	while (position == string::npos )
	{
		cout << "Invalid string to replace...Enter your string again\n";
		cin >> toSearch;
		position = strSentence.find (toSearch);
	}
	
	cout << "What would you like to replace '" << toSearch << "' with \n";
	cin >> toReplace;
	
	// check for how many words to replace
	length = toSearch.length();
	
	//replace the string
	strSentence.replace (position, length, toReplace);

	cout << "The new string now is :\n";
	cout << strSentence ;
	
	cout << "\nDo you want to modify the string again?\n";
	cout << "Enter any key to continue. And Q to quit\n";
	cin.ignore();
	choice = cin.get();	
	
	}
	
	while (toupper(choice) != 'Q' );
	cout << "Program quitted\n";
	
return 0;
}
