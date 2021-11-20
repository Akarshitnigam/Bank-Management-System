#include<bits/stdc++.h>
using namespace std;

class Bank{
    string name, add, y;
    float balance;
    public:
    void open_account();
    void deposit_money();
    void withdraw_money();
    void Display_account();



};
void Bank :: open_account(){
    cout<<"Enter your full name : "<<endl;
    cin>> name;
    cout<<"Enter your address : "<<endl;
    cin>> add;
    cout<< "What type of bank account you wanna open, press s for Savings or press c for Current"<<endl;
    cin>> y;
    cout<<"You have chosen "<<y<<" type of account"<<endl;
    cout<<"Enter the initial amount you wanna deposit in the bank account"<<endl;
    cin>> balance;
    cout<<"Congratulations, Your account has been created "<<endl;

}

void Bank:: deposit_money(){
    int a;
    cout<<"How much do you wanna deposit in your bank account?"<<endl;
    cin>>a;
    balance+=a;
    cout<<"Total amount of money you have in your bank account is "<<balance<<endl;

}
void Bank:: Display_account(){
    cout<<"Account is in the name of "<<name<<endl;
    cout<<"Your address in the record of bank is "<<add<<endl;
    cout<<"Your account is  of type  "<<y<<endl;
    cout<<"Current Balance in the acccount is "<<balance<<endl;

}
void Bank:: withdraw_money(){
    cout<<"You have chosen to withdraw money "<<endl;
    cout<<"Please enter the amount you wanna withdraw from your account "<<endl;
    float toWithdraw;
    cin>>toWithdraw;
    cout<<"You have withdrawn "<<toWithdraw<<" from your bank account"<<endl;
    balance -= toWithdraw;

    cout<<"Your current Balance is "<<balance<<endl;

}

int main(){
    int ch;
    string more;
    Bank obj;
    do{
    cout<<"..........................Welcome to your Bank.........................."<<endl;
    cout<<"1) Open Account "<<endl;
    cout<<"2) Deposit money"<<endl;
    cout<<"3) Withdraw money"<<endl;
    cout<<"4) Display account"<<endl;
    cout<<"5) Exit"<<endl;
    cout<<"Select the desired option from above written options "<<endl;
    cin>>ch;
    switch(ch){
        case 1:
        obj.open_account();
        break;
        case 2:
        obj.deposit_money();
        break;
        case 3:
        obj.withdraw_money();
        break;
        case 4:
        obj.Display_account();
        break;
        case 5:
        if(ch==5){
            exit(0);
        }
        default:
         cout<<"Please enter some valid option "<<endl;
    }
    cout<<"Anything else"<<endl;
    cout<<"If there is then press  y "<<endl;
    cout<<"If you don't want anything from me then please enter anything except y"<<endl;
    cin>>more;
    
        
    }while(more=="y");

    cout<<"You have not pressed y so I am hoping that you are done with me....."<<endl;
    cout<<"--------Thank you for using our services--------"<<endl;
    


    return 0;

}