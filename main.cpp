#include <iostream>
#include <string>
#include "Responses.h"
using namespace std;
int main()
{
	int key; // key selection
	string text; // holds input text from user 

	// MENU SCREEN

	cout << "Hello. Welcome to _Company Name_. I'm here to help." << endl; // basic intro
	cout << "Please Select A Menu" << endl;

	cout << "1) Troubleshoot Technical Issues." << endl; // menu selection
	cout << "2) Payment management." << endl;
	cout << "3) Content Available Inquiries." << endl;

	cout << "TYPE \" END \" AT ANY POINT TO END THIS SESSION." << endl;
	cin >> key;

	if (key == 1) 
	{
		cout << "Troubleshoot Technical Issues Selected." << endl;	
		cout << "Please tell me your troubleshooting issue." << endl;
		cin.ignore();		
		while (text != "end")		// if "end" is typed, end session
		{
			getline(cin, text);
			text = inquiry(text, key);
			cout << text << endl;
		}

	}
	else if (key == 2)
	{

		cout << "Payment Management Selected." << endl;
		cout << "What is your payment concern?" << endl;
		cin.ignore();
		while (text != "end")
		{
			getline(cin, text);
			text = inquiry(text, key);
			cout << text << endl;
		}

	}

	else if (key == 3)
	{
		cout << "Content Available Inquiries Selected." << endl;
		cout << "What content are you looking for?" << endl;
		cin.ignore();
		while (text != "end")
		{
			getline(cin, text);
			text = inquiry(text, key);
			cout << text << endl;
		}
	}

	cout << "ending chat...";
	cout << endl << "Thank you for using our chat bot. Were you satisfied with our service?" << endl;
	cout << "If you have any suggestions for this bot, please submit them in our suggestions page.";


	system("pause");
	return 0;
}
