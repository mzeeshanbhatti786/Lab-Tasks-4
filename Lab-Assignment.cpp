//Muhammad Zeeshan Bhatti
//L1F26BSCS0312
//Task=1
#include <iostream>
using namespace std;

int main() 
{   int number;
    cout <<"enter your number="<<endl;
    cin>>number;
    if(number>0)
    cout<<"positive number"<<endl;
//Task=2
   int bill;
   cout<<"enter your bill amount="<<endl;
   cin>>bill;
   if(bill>=5000)
   cout<<"you qualify for a discount"<<endl;
   else
        cout<<"Thank you for visiting"<<endl;
//Task=3
    int digits;
    cout<<"enter your digits="<<endl;
    cin>>digits;
    if(digits %2==0)
    cout<<"even number"<<endl;
    else
    cout<<"odd number"<<endl;
//Task=4
int vote;
cout<<"enter your age"<<endl;
cin>>vote;
if(vote>=18)
cout<<"Eligible to vote"<<endl;
else 
cout<<"Not eligible to vote"<<endl;
//Task=5
int firstnumber,secondnumber;
cout<<"enter first number"<<endl;
cin>>firstnumber;
cout<<"enter second number"<<endl;
cin>>secondnumber;
if(firstnumber > secondnumber)
cout<<"First number is greater than the second number"<<endl;
if (secondnumber>firstnumber)
cout<<"First number is not greater than the second number"<<endl;
else 
    cout<<"both numbers are equal"<<endl;
//Task=6
int marks;
cout<<"enter your marks="<<endl;
cin>>marks;
if (marks>=90)
cout<<"A Grade"<<endl;
else if(marks>=80 )
cout<<"B Grade"<<endl;
else if (marks>=70 )
cout<<"C Grade"<<endl;
else if (marks>=60 )
cout<<"D Grade"<<endl;
else
cout<<"F Grade"<<endl;
//Task=7
int temperature;
cout<<"enter your temperature"<<endl;
cin>>temperature;
if(temperature<10)
cout<<"warm"<<endl;
if(temperature<25)
cout<<"pleasant"<<endl;
else if(temperature<35)
cout<<"warm"<<endl;
else
cout<<"hot"<<endl;
//Task=8
//#include <iostream>
//using namespace std;
//int main() {
//int marks;
//cout << "Enter marks: ";
//cin >> marks;
//if (marks >= 50) {
//cout << "Pass" << endl;
//} else {
//cout << "Fail" << endl;
//}
//return 0;
//#The error is that we just put > to show if marks are greater than or equals
//to 50 then print pass.

//Task=9
int units;
cout<<"enter monthly units"<<endl;
cin>>units;
if (units<=100)
cout<<"low usage"<<endl;
else if(units>=101 && units<300)
cout<<"medium usage"<<endl;
else
   cout<<"High Usage"<<endl;
   //Task=10
   int mark;
   cout<<"enter your mark"<<endl;
   cin>>mark;
   if(mark>=85)
   cout<<"scolarship awarded"<<endl;
   else
      cout<<"Scolarship not awarded"<<endl;

//Task=11
    int age;
    cout<<"enter visitor age"<<endl;
    cin>>age;
    if(age<5)
    cout<<"Ticket is free"<<endl;
    else if(age>=5 && age<=17)
    cout<<"Pay 200 Rupees for ticket"<<endl;
    else if(age>=18 && age<=59)
    cout<<"pay 500 Rupees for Ticket"<<endl;
    else 
        cout<<"Senior Ticket=Pay Rupees 300"<<endl; 


    return 0;
}