#include <iostream>
#include <string>
using namespace std;


void aaaaa();
int main(){

    aaaaa();

    return 0;
}

int length=100;
string fakeFlag="NTI{fake_flag}";

void generateFlag(){
    char encryptionKey[11];
    int n = 0;
    encryptionKey[n++] = 'N';
    encryptionKey[n++] = 'T';
    encryptionKey[n++] = 'I';
    encryptionKey[n++] = '{';
    encryptionKey[n++] = 'p';
    encryptionKey[n++] = 'l';
    encryptionKey[n++] = 'z';
    encryptionKey[n++] = '-';
    encryptionKey[n++] = 'n';
    encryptionKey[n++] = 'o';
    encryptionKey[n++] = '}';


    for(int i=0;i<11;i++){
        cout<<encryptionKey[i];
    }
}




void aaaaa(){
    int i=0;
    char c;
    while(true){
        cout<<"\nWould you like to install update "<<i<<"/"<<length<<"? (y/n) ";
        cin>>c;
        if(c=='y'){
            i++;
        }
        if(i>=length){

            cout<<endl;

            generateFlag();
            cout<<endl;

            return;
        }
    }
}