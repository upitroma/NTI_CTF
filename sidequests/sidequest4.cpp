#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[]){
    
    string input;


    for(int i = 0; i < argc; ++i){
        string temp;
        temp = argv[i];

        if(temp=="allenIsCool"){
            
            cout<<"\nNice one.\nThis next input is encoded in a cipher.\nbmtnxwjfidktwymjrnsjhwfkyhfajzuifyj\n";
            cout<<"Enter the secret message or type 'hint' for a hint.>";

            while(true){
                cin>>input;
                if(input=="whoisreadyfortheminecraftcaveupdate"){
                    cout<<"NTI{U-ZQQP-FA-BQQ}\n";
                    return 0;
                }
                else if(input=="hint"){
                    cout<<"\nBeware the ides of march.\nType the secret message or type 'hint2' for another hint.>";
                }
                else if(input=="hint2"){
                    cout<<"\nThat cipher is looking kinda shifty.\nEnter the secret message or type 'hint' for a hint.>";
                }
                else if(input=="hint3"){
                    cout<<"\ngoogle 'caesar cipher'.\nEnter the secret message or type 'hint' for a hint.>";
                }
                else if(input=="hint4"){
                    cout<<"\nI really don't think i could be more clear.\nEnter the secret message or type 'hint' for a hint.>";
                }
                else{
                    cout<<"\nInvalid input.\nEnter the secret message or type 'hint' for a hint.>";
                }
            }
                       
        }
    }



    cout<<"Just like the last one, the first input is a freebie\nENTER THE WORD 'keyboard' >";
    cin>>input;
    if(input!="keyboard"){
        cout<<"INCORRECT INPUT. ENDING PROGRAM.\n";
        return 0;
    }

    
    cout<<"\nLike I said, the first input is a freebie\nSome programs can take in additional arguments/paramaters.\n";
    cout<<"Run this program again with 'allenIsCool' as the argument\n\nType 'quit' to close the progtam, or type 'hint' for a hint.>";
    cin>>input;
    if(input=="hint"){
        cout<<"./sidequestV2 allenIsCool\n";
    }
    else if(input=="quit"){
        return 0;
    }
    

    return 0;
}