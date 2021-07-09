#include <iostream>
#include <fstream>
#include <vector> 
using namespace std; 

int main()
{
    string filename; 
    cin >> filename; 

    ofstream file (filename, ios::app);

    if (file.is_open())
    {
        cout << "Success \n"; 
    }

    vector<string> names; 
    names.push_back("Matt");
    names.push_back("Nick");
    names.push_back("Vinnie");

    for (string name : names)
    {
        file << name << endl; 
    }

    file.close(); 
    return 0; 
}

