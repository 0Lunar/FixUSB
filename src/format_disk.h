#include <iostream>
#include <fstream>
using namespace std;

void format_disk(string disk){
    string script = "select " + disk + "\nclean\ncreate partition primary\nselect partition 1\nformat quick", sure;
    ofstream format_disk;
    format_disk.open("src/diskpart_scripts/format_disk", ios::out);
    format_disk << script;
    format_disk.close();
    cout << "Are you sure you want to restore the disk (y/n)";
    cout << "\n\n -> ";
    cin >> sure;
    if(sure == "y" || "Y"){
        cout << "\nFormatting " << disk << endl << endl;
        system("diskpart /s src/diskpart_scripts/format_disk");
        cout << "\n\n Done!";
    }
    else if(sure == "n" || "N"){
        cout << "\n\n Stopping...";
    }
    else{
        cout << "\n\n Error...";
    }
}