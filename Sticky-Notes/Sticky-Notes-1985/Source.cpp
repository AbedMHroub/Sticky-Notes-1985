#include <iostream>
#include <String>
#include<vector>
#include <fstream>
using namespace std;
 vector<vector<string> > all_user;
int main() {

    int choice;
    
        cout << endl
             << "Welcome to the brand new �Sticky Notes�!.\n"
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
                string first_name,last_name,file_name ;
                cin >> first_name;
                cout << endl
                     << "Great "<<first_name<<" , now please enter your last name:";
                cin >> last_name;
                cout << endl
                     << " Done!.\n"
                     << " Nice to meet you .\n"<<first_name<<" "<<last_name
                     << " .\n<Click Enter to return to main menu>.\n";
<<<<<<< HEAD

                string filename=  first_name+" "+last_name;
                cout <<filename;

                ofstream myfile;
                myfile.open ("filename.txt");
                myfile << "Writing this to a file.\n";
                myfile << "000" << filename;
                myfile.close();
=======
//string filename=   ;   **first name+last name
                cout << "Enter user name";
                
               
				   }
>>>>>>> 56ff2095387f9f2018d5e2b36d599f4e641aa94e

                break;
				//code to Add new note

			case 2:
				{
					string First_Name ,Last_Name;
				cout <<" Let�s add a new note ... \n"
<<"Please enter your full name first: <Enter First Name> <Enter Last Name> \n";
				cin>> First_Name>>Last_Name;
				for (int i = 0; i < all_user.size(); i++) { 
        for (int j = 0; j < all_user[i].size(); j++) 
            cout << all_user[i][j] << " "; 
        cout << endl; 
    } 
				
				}
				break;
           
    return 0;
}
}