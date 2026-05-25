#include <iostream>

#ifndef PASSWORD_MANAGER_H//checks if a unique token named PASSWORD_MANAGER_H has been defined. If it hasn't, the code between #ifndef and #endif will be included in the compilation process. This prevents multiple inclusions of the same header file, which can lead to errors.
#define PASSWORD_MANAGER_H //defines the unique token PASSWORD_MANAGER_H, so that if this header file is included again, the code between #ifndef and #endif will be skipped.


#include <string>
#include <vector>

using namespace std;

struct PasswordEntry {

    
        string website;
        string username;
        string password;

};

 //encapsulattion
class PasswordManager {
                private:
                       vector<PasswordEntry> passwords;
                 public:
                        //nested type(nested declaration)
                        //prevents name clashesses
                        enum class MenuOption {
                            ADD = 1,
                            VIEW,
                            DELETE_OPTION,
                            EXIT
                        };

                        //void run();

                        void addPassword(){
                            PasswordEntry entry;
                            cout << "Enter website: ";
                            cin >> entry.website;
                            cout << "Enter username: ";
                            cin >> entry.username;
                            cout << "Enter password: ";
                            cin >> entry.password;
                            passwords.push_back(entry);
                            cout << "Password added successfully!" << endl;

                        }
                        void showPasswords(){
                            cout << "Saved Passwords:" << endl;
                            for (const auto& entry : passwords) {
                                cout << "Website: " << entry.website 
                                     << ", Username: " << entry.username 
                                     << ", Password: " << entry.password << endl;
                            }
                        }
                        void deletePassword();  
                        
                        //constructor
                        PasswordManager() {}
    
};

#endif // PASSWORD_MANAGER_H