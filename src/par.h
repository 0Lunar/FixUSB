#include <iostream>
#include <fstream>
using namespace std;

void par(string disk){
    int option;
    string script, scr2 = "src/diskpart_scripts/par";
    cout << "\n\n 1. create partition primary";
    cout << "\n 2. create partition efi";
    cout << "\n 3. create partition extended"; 
    cout << "\n 4. create partition msr";
    cout << "\n 5. create volume simple";
    cout << "\n 6. create volume mirror";
    cout << "\n 7. create volume raid";
    cout << "\n 8. create volume stripe";
    cout << "\n\n -> ";
    cin >> option;
    if(option == 1){
        string script = "select " + disk + "\ncreate partition primary";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 2){
        string script = "select " + disk + "\ncreate partition efi";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 3){
        string script = "select " + disk + "\ncreate partition extended";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 4){
        string script = "select " + disk + "\ncreate partition msr";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 5){
        string script = "select " + disk + "\ncreate volume simple";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 6){
        string script = "select " + disk + "\ncreate volume mirror";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 7){
        string script = "select " + disk + "\ncreate volume raid";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else if(option == 8){
        string script = "select " + disk + "\ncreate volume stripe";
        ofstream par;
        par.open(scr2, ios::out);
        par << script;
        par.close();
    }
    else{
        cout << "\n\n Error";
        return;
    }
    if(option < 5){
        cout << "\n Creating partition\n\n";
        system(("diskpart /s " + scr2).c_str());
    }
}