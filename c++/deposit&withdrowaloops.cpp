#include<iostream>
using namespace std;
class bank;

private:
float balance;

public:

void deposit(){
balance = balance - amounnt;
cout<<"yours current balnce is: "<<balance;
}

void withdrown(){
if(amount<=balance)
balance = balance - amount;
cout<<"your current balance is: "<<balance;
}

int main(){
bank obj;
obj.balance=1200;
obj.amount=100;
 deposit();

}