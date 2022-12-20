#include <iostream>
#include <fstream>
using namespace std;

void clean_disk(string disk){
    string script = "select " + disk + "\nclean", sure;
    ofstream clean;
    clean.open("src/diskpart_scripts/clean", ios::out);
    clean << script;
    clean.close();
    cout << "Are you sure you want to clean the disk (y/n)";
    cout << "\n\n -> ";
    cin >> sure;
    if(sure == "y" || "Y"){
        cout << "\nFormatting " << disk << endl << endl;
        system("diskpart /s src/diskpart_scripts/clean");
        cout << "\n\n Done!";
    }
    else if(sure == "n" || "N"){
        cout << "\n\n Stopping...";
    }
    else{
        cout << "\n\n Error...";
    }
}