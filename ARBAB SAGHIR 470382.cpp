#include<iostream>
using namespace std;
int main()
{
//x is marks of student
int x;
cout<<"The marks of student is:";
cin>>x;
//writing a program to assigning a grade to a student based on his numbers
if(x<=100&&x>=90)
//student will get A grade when score are between 90 and 100 and so on
{
cout<<"Grade of student is A"<<endl;
}
else if(x<=90&&x>=75)
{
cout<<"Grade of student is B"<<endl;
}
else if(x<=75&&x>=60)
{
cout<<"Grade of student is C"<<endl;
}
else if(x<=60&&x>=45)
{
cout<<"Grade of student is D"<<endl;
}
else if(x<=45&&x>=0)
{
cout<<"Grade of student is E"<<endl;
}
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
//defining variable a and geting a integer input from user
int z;
cout<<"The Value Of Integer is:";
cin>>z;
//making a program that checks if integer is even or odd
if(z%2==0)
{
//making a program that checks if integer is divisible by 5 or not
if(z%5==0)
{
cout<<"The integer is both even and divisible by 5"<<endl;
}
else
{
cout<<"The integer is even but not divisible by 5"<<endl;
}
}
else
{
cout<<"The integer is odd number which may or may not be divisble by 5"<<endl;
}
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
//b is no of days in a year
int b;
cout<<"The numbers of days in a year are:";
cin>>b;
//writing a programme that tells if given year is leap year or not
if(b==366)
{
//Given year will be leap year if it consist of 366 days
cout<<"The given year is a Leap Year"<<endl;
}
else
{
cout<<"The given year is not a leap year"<<endl;
}
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
//c is student GPA and d is student attendance
float c,d;
cout<<"Student GPA is:";
cin>>c;
cout<<"Student attendance is:";
cin>>d;
//writing a programme that tells if a student is eligible for scholarship or not
if(c>=3.5&&d>=80)
{
//student is eligible for scholarship if GPA is greater than 3.5 and attendance is more than 80
cout<<"Student is eligible for scholarship"<<endl;
}
else
{
cout<<"Student is not eligible for scholarship"<<endl;
}
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
cout<<" "<<endl;
//y is variable whose value will be any character
char y;
cout<<"charcter value stored in y is:";
cin>>y;
//writing a programme that shows if given character is vowel or not
if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u')
{
cout<<"Given character is a vowel"<<endl;
}
else
{
cout<<"Given character is a consonant"<<endl;
}
}
