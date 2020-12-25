#include <iostream>
#include <string>


using namespace std;

string  alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
string secret_message{};
string encrypted_message{};
string decrypted_message{};


int main(){
  cout << "Enter your secret message: ";
  getline(cin,secret_message);


  cout << "\nEncrypting  message....."  << endl;


  for (char c : secret_message){
    size_t position = alphabet.find(c);
    if (position != string::npos){
      char new_char{key.at(position)};
      encrypted_message += new_char;
    }else{
      encrypted_message += c;
    }

  }

  cout << "Encrypted message: " << encrypted_message << endl;



  cout << "\nDecrypting message..." << endl;


  for (char c : encrypted_message){
    size_t position = key.find(c);
    if (position != string::npos){
      char new_char{alphabet.at(position)};
      decrypted_message += new_char;
    }else{
      decrypted_message += c;
    }

  }


  cout << "Decrypted message: " << decrypted_message << endl;


}
