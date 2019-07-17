#include <iostream>
#include <String>
#include<vector>
#include <fstream>
using namespace std;
 vector<vector<string> > all_user;
int main() {

    int choice;
    
        cout << endl
             << "Welcome to the brand new “Sticky Notes”!.\n"
             << "Here is the list of operation this program offers:.\n"
             << " 1 - Add new user.\n"
             << " 2 - Add new note.\n"
             << " 2 - View notes for a specific user.\n"
             << " 4 - Exit.\n"
             << " Enter your choice and press return: ";
        cin >> choice;

        switch (choice)
        {
            case 1:{
//code to Add new user
                cout << endl
                     << "Welcome aboard new user!.\n"
                     << "Please let me know your first name:.\n";
				string first_name,last_name ;
                cin >> first_name;
                cout << endl
                     << "Great "<<first_name<<" , now please enter your last name:";
                cin >> last_name;
                cout << endl
                     << " Done!.\n"
                     << " Nice to meet you .\n"<<first_name<<" "<<last_name
                     << " .\n<Click Enter to return to main menu>.\n";
//string filename=   ;   **first name+last name
                cout << "Enter user name";
                
               
				   }

                break;
				//code to Add new note

			case 2:
				{
					string First_Name ,Last_Name;
				cout <<" Let’s add a new note ... \n"
<<"Please enter your full name first: <Enter First Name> <Enter Last Name> \n";
				cin>> First_Name>>Last_Name;

				
				}
				break;
           
    return 0;
}
}