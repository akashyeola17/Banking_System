#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    //variables declaration..
    string name{};
    string sur_name{};
    string Fathers_name{};
    string mother_name{};
    string martial_status{};
    string account_type{};
    string adress{};
    string email_id{};
    string gender{};
    long long int aadhar_number{};
    char selection{};
    long int Account_number{};
    int age{};
    long long int balance{};
    long long int mobile_number{};

    //main program..
    do{
            cout<<"\n\n\t\t\t\t\t\t*****************";
            cout<<"\n\t\t\t\t\t\tBANK MANAGEMENT SYSTEM";
            cout<<"\n\t\t\t\t\t\t*****************";
            cout<<"\n\t\t\t\t\t\t:: MAIN MENU ::";
            cout<<"\n\n\t\t\t\t\t\t1.Create account";
            cout<<"\n\t\t\t\t\t\t2.Cash deposit";
            cout<<"\n\t\t\t\t\t\t3.Cash withdrawl";
            cout<<"\n\t\t\t\t\t\t4.Balance enquiry";
            cout<<"\n\t\t\t\t\t\t5.Account details";
            cout<<"\n\t\t\t\t\t\t6.Quit";

    cout<<"\n\n\nPlease select from the following Menu: "<<endl;
    cin>>selection;




    if(selection == '1'){
            cout<<"\nWARNING:- To create new account your age must be 18 plus";
            cout<<"\nEnter your age: ";
            cin>>age;
            if(age<18){
                cout<<"Hey,the age limit is 18,come in "<< 18-age<<" years"<<endl;
            }else{
                cout<<"------Personal Details---------"<<endl;
        cout<<"\nEnter your name: ";
        cin>>name;
        cout<<"\nEnter your Father's name:";
        cin>>Fathers_name;
        cout<<"\nEnter your Mother's name:";
        cin>>mother_name;
        cout<<"\nEnter your surname:";
        cin>>sur_name;
        cout<<"\nEnter your Mobile number:";
        cin>>mobile_number;
        cout<<"\nSelect your gender(Male/female/other):";
        cin>>gender;
        cout<<"\nEnter your Email-id: ";
        cin>>email_id;
        cout<<"\nSelect your account type(current/savings):";
        cin>>account_type;
        cout<<"\nMartial Status(single/married):";
        cin>>martial_status;
        cout<<"\nAdress:";
        cin>>adress;
        cout<<"\nAadhar-card number: ";
        cin>>aadhar_number;
        cout<<"\nHey,"<<name<<" You have successfully created your account"<<" We have sent an Account number to your registered mobile number "<<mobile_number<<" Please check..!!!"<<endl;;
        cout<<"\nEnter your account number that is already sent to your Mobile number:"<<mobile_number<<endl;
        cin>>Account_number;
        }
        cout<<"\n\t\t\t\t\t\t=====Would you like to choose another activity(y/n)====:";
            cin>>selection;
            if(selection =='y' || selection == 'Y'){
                continue;
            }else{
                break;
            }
    }
    else if(selection == '2'){
        cout<<"\nEnter your account number:"<<endl;
        cin>>Account_number;
        long int amount_deposited{};
        cout<<"\nEnter amount to be deposited: "<<endl;
        cin>>amount_deposited;
        balance += amount_deposited;
        cout<<"Your account number "<<Account_number<<" has been successfully credited by RS:"<<amount_deposited<<" and your current balance is "<<balance<<endl;
        cout<<"\n\t\t\t\t\t\t=====Would you like to choose another activity(y/n)======:";
            cin>>selection;
            if(selection =='y'){
                continue;
            }else{
                break;
            }
    }else if(selection == '3'){
        long int amount_withdraw{};
        cout<<"\nEnter your account number:"<<endl;
        cin>>Account_number;
        cout<<"\nEnter amount to be Debited: "<<endl;
        cin>>amount_withdraw;
        if(balance < amount_withdraw){
            cout<<"Hey, "<<" Your account number "<< Account_number <<" has insufficient balance "<<" Cant complete transaction "<<endl;
        }else{
            balance -= amount_withdraw;
            cout<<"Your account number "<<Account_number<<" has been successfully debited by RS: "<<amount_withdraw<<" and your current balance is: "<<balance;
            cout<<"\nEnter your account number:";
        }
        cout<<"\n\t\t\t\t\t\t=====Would you like to choose another activity(y/n)=====:";
            cin>>selection;
            if(selection =='y' || selection == 'Y'){
                continue;
            }else{
                break;
            }
    }else if(selection == '4'){
        cout<<"your Account balance is: "<<balance<<" Rupees."<<endl;
        cout<<"\n\t\t\t\t\t\tWould you like to choose another activity(y/n):";
            cin>>selection;
            if(selection =='y' || selection == 'Y'){
                continue;
            }else{
                break;
            }
            cout<<"\n\t\t\t\t\t\t=====Would you like to choose another activity(y/n)=====:";
            cin>>selection;
            if(selection =='y' || selection == 'Y'){
                continue;
            }else{
                break;
            }
    }else if(selection == '5'){
        cout<<"\n\t\t\t\t\t\t\t===PERSONAL DETAILS====="<<endl;
        cout<<"\n\t\t\t\t\t\t\tAccount holders name: "<<name<<"\t"<<Fathers_name<<"\t"<<sur_name;
        cout<<"\n\t\t\t\t\t\t\tMoile number: "<<mobile_number;
        cout<<"\n\t\t\t\t\t\t\tAccount number: "<<Account_number;
        cout<<"\n\t\t\t\t\t\t\tAadhar number: "<<aadhar_number;
        cout<<"\n\t\t\t\t\t\t\tAge: "<<age;
        cout<<"\n\t\t\t\t\t\t\tAccount type: "<<account_type;
        cout<<"\n\t\t\t\t\t\t\tBranch adress: "<<adress;
        cout<<"\n\t\t\t\t\t\t\tCurrent balance: "<<balance;
         cout<<"\nWould you like to choose another activity(y/n):";
            cin>>selection;
            if(selection =='y'){
                continue;
            }else{
                break;
            }
    }else if(selection == '6'){
        cout<<"\ngoodbye..!!!"<<endl;
    }else{
        cout<<"\nPlease choose proper option..!!!!";
        cout<<"\n\t\t\t\t\t\t=====Would you like to choose another activity(y/n)=====:";
            cin>>selection;
        if(selection =='y'){
                continue;
            }else{
                break;
            }
    }
        } while(selection != '6');
    return 0;
}
