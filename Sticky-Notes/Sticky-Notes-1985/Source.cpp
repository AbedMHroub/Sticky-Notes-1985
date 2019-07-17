#include <iostream>
#include <String>

#include <fstream>
using namespace std;

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
            case 1:
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

                string filename=  first_name+" "+last_name;
                cout <<filename;

                ofstream myfile;
                myfile.open ("filename.txt");
                myfile << "Writing this to a file.\n";
                myfile << "000" << filename;
                myfile.close();

                break;
           
    return 0;
}
}