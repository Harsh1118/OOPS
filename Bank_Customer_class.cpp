#include<iostream>
using namespace std;

class Customer {
string name;
int account_number;
int account_balance;
bool is_active;

public :
Customer (string name,int account_number , int account_balance ,bool is_active) 
{
    this->name = name;
    this->account_number = account_number;
    this->account_balance = account_balance;
    this->is_active = is_active;
}

void details() 
{
    cout<<"Account Holder : "<<name<<endl;
    cout<<"Account Number : "<<account_number<<endl;
    cout<<"Account Balance : "<<account_balance<<endl;
    if(is_active) 
    {
        cout << name<<" have an Active Account"<<endl;
    }
    cout<< "-----------***-----------"<<endl;
}

void display_name()
{
    cout << "Account Holder : "<<name<<endl;
}

void display_account_number()
{
    cout << "Account Number : "<<account_number<<endl;
}

void display_account_balance()
{
    cout << "Account Balance : "<<account_balance<<endl;
}

void display_active()
{
    if(is_active)
    {
        cout << name<<"'s Account is Active "<<endl;
    }
    else
    {
        cout << name<<"'s Account is Deactive"<<endl;
    }
}

void deposit(int amount) 
{
    if(is_active) 
    {
    if(amount>0) 
    {
        account_balance+=amount;
        cout<<"Rs. "<<amount<<" is succesfully Deposited to your account."<<endl;
    }
    else 
    {
        cout << "Invalid Amount,Amount should not be Less than or equal to zero"<<endl;
    }
}

else 
{
    cout<<"Sorry,You Have an Deactivate Account"<<endl;
}
}

void withdraw(int amount) 
{
    if(is_active) 
    {
    if(amount <= account_balance) 
    {
        account_balance-=amount;
        cout<<"Rs. "<<amount<<" is successfully withdrawn from your account"<<endl;
    }

    else 
    {
        cout << "Invalid Amount , Insufficient balance" <<endl;
    }
}
else 
{
    cout<<"Sorry,You Have an Deactivate Account"<<endl;
}

}

void transfer(int amount , Customer &other) 
{
    if(is_active)
    {
    if(amount<=account_balance)
    {
        other.account_balance += amount;
        account_balance-=amount;
        cout << "Rs. " << amount << " is successfully tranferred from your account" << endl;
    }

    else 
    {
        cout << "Invalid Amount,Insufficient Balance" <<endl;
    }
}


else 
{
    cout<<"Sorry,You Have an Deactivate Account"<<endl;
}

}

};
int main () 
{
    Customer A1("Harsh",7,1000,1);
   A1.details();
   Customer A2("Krishna",12,10000000,1);
   A1.deposit(500);
   A1.withdraw(600);
   A2.transfer(100000,A1);
   A2.details();
}