#include <iostream>
#include <io.h>        // For access().
#include <string>

using namespace std;

int main() {
    string strPath = "C:\\Users\\sajib\\Desktop\\cpp_All\\sajib.ps1";

    // Check if the file exists
    if (access(strPath.c_str(), 0) == 0) {
        system("powershell.exe Set-ExecutionPolicy RemoteSigned");
        system(("powershell.exe " + strPath).c_str());
        system("cls");
    } else {
        cout << "File does not exist";
        system("pause");
    }

    return 0;
}
