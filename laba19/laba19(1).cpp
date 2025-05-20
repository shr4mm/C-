/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cctype>
using namespace std;
void checkPassword(string password, bool& is_valid, bool& hasUpper, bool& hasLower, bool& hasDigit, bool& hasSpecial){
   string specialChars = "!@#$%^&*()-_=+[]{}|;:',.<>?/";
    if (password.length() > 8) {
        is_valid= true;
    }
    for(int i=0;i<password.length();i++){
        
        if(!hasUpper && isupper(password[i])){
            hasUpper=true;
        }
        else if(!hasLower && islower(password[i])){
            hasLower=true;
        }
        else if (!hasDigit && isdigit(password[i])){
            hasDigit=true;
        }
         else if (specialChars.find(password[i]) != string::npos) { //string::npos = «не найдено».
            hasSpecial = true;
        }
    }
}
int main()
{
    bool is_valid = false;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;
    string password;
    cout << "Enter password: ";
    getline(cin, password);
    checkPassword(password, is_valid, hasUpper, hasLower, hasDigit, hasSpecial);
    if(!is_valid || !hasUpper || !hasLower || !hasDigit || !hasSpecial){
        if(!is_valid){cout<<"The password must be 8 characters long"<<endl;}
        if(!hasUpper){cout<<"The password must have at least one upper case letter"<<endl;}
        if(!hasLower){cout<<"The password must have at least one lower case letter"<<endl;}
        if(!hasDigit){cout<<"The password must have at least one digit"<<endl;}
        if(!hasSpecial){cout<<"The password must have at least one special character"<<endl;}
    }else{
        cout << "The password is valid" <<endl;
    }

    
    

    
    
}