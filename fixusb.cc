#include <iostream>
#include <fstream>
#include "src/format_disk.h"
#include "src/clean_disk.h"
#include "src/par.h"
#include "src/drivers.h"
using namespace std;

int main(){
    int method, mt2;
    string disk, disk_number;
    system("diskpart /s \"src/diskpart_scripts/list_disk\"");
    cout << "\n\n Enter the number of the disk -> ";
    cin >> disk_number;
    disk = "disk " + disk_number;
    cout << "\n Enter the method:\n\n";
    cout << " 1. restore the disk";
    cout << "\n 2. clean the disk";
    cout << "\n 3. create a partition/volume";
    cout << "\n 4. driver settings";
    cout << "\n\n Method ==> ";
    cin >> method;
    switch(method){
    case 1:
        format_disk(disk);
        break;
    case 2:
        clean_disk(disk);
        break;
    case 3:
        par(disk);
        break;
    case 4:
        cout << "\n\n Options: ";
        cout << "\n\n 1. install a new driver";
        cout << "\n 2. uninstall a driver";
        cout << "\n\n -> ";
        cin >> mt2;
        driver_settings(mt2);
    default:
        cout << "\n Error.";
        break;
    }
}