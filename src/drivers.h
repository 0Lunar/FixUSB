#include <iostream>
#include <string>
using namespace std;

void driver_settings(int mt2){
    string config_file;
    if(mt2 == 1){
        cout << "\n\n Enter the filename.inf\n\n";
        cout << " -> ";
        cin >> config_file;
        size_t found = config_file.find("inf");
        if(found != string::npos){
            cout << "\n\n Installing driver...\n";
            system(("pnputil /install " + config_file + " /install").c_str());
            cout << "\n Done";
        }
        else{
            cout << "\n Error .inf file not found";
        }
    }
    else if(mt2 == 2){
        cout << "\n\n Enter the filename.inf\n\n";
        cout << " -> ";
        cin >> config_file;
        size_t found = config_file.find("inf");
        if(found != string::npos){
            cout << "\n\n uninstalling driver...\n";
            system(("pnputil /delete-driver " + config_file + " /uninstall /force").c_str());
            cout << "\n Done";
        }
        else{
            cout << "\n Error .inf file not found";
        }
    }
    else{
        cout << "\n Error.";
    }
}