#include <iostream>
#include "passwordManager.h"

using namespace std;

int main() {

    PasswordManager manager;

    manager.addPassword();
    manager.showPasswords();
    return 0;
/*
    #include "passwordManager.h"

// Constructor implementation
PasswordManager::PasswordManager() {
    // Empty for now, or add initialization if needed
}

// Complete deletePassword implementation
void PasswordManager::deletePassword() {
    if (passwords.empty()) {
        cout << "No passwords to delete." << endl;
        return;
    }
    // Add deletion logic here
}*/

}