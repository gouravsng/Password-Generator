// Random Password Generator Written by Gourav Kumar 
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

//function start 

string getPassword(int len){
    string Password = "";
    string characters = "aquickbrownfoxjumpoverthelazydogAQUICKBROWNFOXJUMPOVERTHELAZYDOG0123456789";
    int charSize = characters.size(); // store the length of characters 
    srand(time(0));
    int randomIndex;
    for(int i = 0 ; i < len; i++){
        randomIndex = rand() % charSize;
        Password = Password + characters[randomIndex];
    }
    return Password;
}

int main(){
    int len;
    cout << "Enter the Length of number : ";
    cin>>len;
    string password = getPassword(len);
    cout << "Generated Password :: " << password;

    return 0;

} 
