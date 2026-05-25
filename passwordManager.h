#include <iostream>
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
                        enum class MenuOption {
                            ADD = 1,
                            VIEW,
                            DELETE_OPTION,
                            EXIT
                        };

                        void run();

                        void addPassword();
                        void showPasswords();

                    
    
};