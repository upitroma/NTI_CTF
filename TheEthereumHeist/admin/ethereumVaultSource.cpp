#include <iostream>
#include <string>
using namespace std;


void generateFlag();

int main(){

    int i=0;
    char c;
    int pin;
    cout<<endl;
    while(true){
        cout<<"\nENTER 4 DIGIT PIN>";
        cin>>pin;
        if(pin==1539){
            cout<<"ACCESS GRANTED\n";
            generateFlag();
            return 0;
        }
        else{
            cout<<"ACCESS DENIED\n";
            return 0;
        }   
    }
}
void generateFlag(){
    char flagArray[59];
    int n = 0;

    flagArray[n++] = 'N';
    flagArray[n++] = 'T';
    flagArray[n++] = 'I';
    flagArray[n++] = '{';
    flagArray[n++] = 't';
    flagArray[n++] = 'h';
    flagArray[n++] = 'e';
    flagArray[n++] = '-';
    flagArray[n++] = 'r';
    flagArray[n++] = 'e';
    flagArray[n++] = 'a';
    flagArray[n++] = 'l';
    flagArray[n++] = '-';
    flagArray[n++] = 'e';
    flagArray[n++] = 't';
    flagArray[n++] = 'h';
    flagArray[n++] = 'e';
    flagArray[n++] = 'r';
    flagArray[n++] = 'e';
    flagArray[n++] = 'u';
    flagArray[n++] = 'm';
    flagArray[n++] = '-';
    flagArray[n++] = 'i';
    flagArray[n++] = 's';
    flagArray[n++] = '-';
    flagArray[n++] = 't';
    flagArray[n++] = 'h';
    flagArray[n++] = 'e';
    flagArray[n++] = '-';
    flagArray[n++] = 'f';
    flagArray[n++] = 'r';
    flagArray[n++] = 'i';
    flagArray[n++] = 'e';
    flagArray[n++] = 'n';
    flagArray[n++] = 'd';
    flagArray[n++] = 's';
    flagArray[n++] = '-';
    flagArray[n++] = 'w';
    flagArray[n++] = 'e';
    flagArray[n++] = '-';
    flagArray[n++] = 'm';
    flagArray[n++] = 'a';
    flagArray[n++] = 'd';
    flagArray[n++] = 'e';
    flagArray[n++] = '-';
    flagArray[n++] = 'a';
    flagArray[n++] = 'l';
    flagArray[n++] = 'o';
    flagArray[n++] = 'n';
    flagArray[n++] = 'g';
    flagArray[n++] = '-';
    flagArray[n++] = 't';
    flagArray[n++] = 'h';
    flagArray[n++] = 'e';
    flagArray[n++] = '-';
    flagArray[n++] = 'w';
    flagArray[n++] = 'a';
    flagArray[n++] = 'y';
    
    flagArray[n++] = '}';

//the-real-ethereum-is-the-friends-we-made-along-the-way

    for(int i=0;i<59;i++){
        cout<<flagArray[i];
    }
    cout<<endl;
}