#include <iostream>
#include <vector>
#include <string>

#include <Perso.h>
#include <Cible.h>

using namespace std;

int main()
{
    vector<string> msg {"Hello+gh", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
        for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}