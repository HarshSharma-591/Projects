#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int main()
{
    string filename;
    fstream file;
    ofstream outfile;
    ifstream infile;

    while (true)
    { 
    int choice;
    cout << "FILE MANAGER\n";
    cout << "1. Create a new file\n";
    cout << "2. Open an existing file\n";
    cout << "3. Write to a file\n";
    cout << "4. Read from a file\n";
    cout << "5. Exit\n";
    cout << "Enter your choice(1-5): ";
    cin >> choice;

    switch(choice) {
        case 1: {
            cout << "Enter filename to open new file: ";
            cin >> filename;

            file.open(filename, ios::out);
            if(file.is_open())
            {
                cout << "File created succesfully." << endl;
                file.close();
            }
            else {
                cout << "Error creating file." << endl;
            }
            break;
        }

        case 2: {
            cout << "Enter filename to open existing file: ";
            cin >> filename;

            file.open(filename);
            if(file.is_open(), ios::in)
            {
                cout << "File opened succesfully.\n";
                file.close();
            }
            else {
                cout << "Error opening file.\n";
            }
            break;
        }

        case 3: {
            string filename;
            cout << "Enter filename to write: \n";
            cin >> filename;
            
            outfile.open(filename, ios::out | ios::app);


            if(outfile.is_open()) {
                string data;
                cout << "Enter data you want to write to the file(Type END on a new line to enter):\n";
                getline(cin, data);

                while (data != "END")
                {
                    outfile << data << endl;
                    getline(cin, data);
                }
                outfile.close();
            }
            else {
                cout << "Error writing to a file\n";
            }
            break;

        }   

        case 4: {
            cout << "Enter filename you want to read from: \n";
            cin >> filename;

            string output;

            infile.open(filename, ios::in);
            if (infile.is_open())
            {
                while (getline(infile, output))
                {
                    cout << output << endl;
                }
                infile.close();
            }
            else {
                cout << "Error reading from this file.\n"; 
            }
            break;
        }

        case 5: {
            cout << "Exiting...\n"; 
            return 0;
        }

        default: {
            cout << "Invalid choice. Please enter a number between 1-5.\n";
            break;
        }
    }
    }
}