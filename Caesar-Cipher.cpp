#include<iostream>
#include<string>
using namespace std;

int main(){
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string message{},encrypted_message{},decrypted_message{};
    cout<<"Enter message"<<endl;
    getline(cin,message);
    for(size_t i{0};i<message.length();i++){
        size_t position = alphabet.find(message.at(i));
        if(position == string::npos){
            encrypted_message += message.at(i);
        }else{
            encrypted_message += key.at(position);
        }
    }
    
    cout<<"ENCRYPTING MESSAGE ..............................."<<endl;
    cout<<encrypted_message<<endl;
    
    for(size_t i{0};i<encrypted_message.length();i++){
        size_t position = key.find(encrypted_message.at(i));
        if(position == string::npos){
            decrypted_message += encrypted_message.at(i);
        }else{
            decrypted_message += alphabet.at(position);
        }
    }
    
        cout<<"DECRYPTING MESSAGE ..............................."<<endl;
    cout<<decrypted_message<<endl;
    
    return 0;
}
