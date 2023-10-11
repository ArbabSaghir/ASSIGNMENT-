#include<iostream>
using namespace std;
int main()
{
	//TASK 1
	//putting age of person
	int f;
	cout<<"The age of person is:";
	cin>>f;
	//writing a progamme that a person is not eligible if person age is less than 18
	if(f<18)
	{
	cout<<"Person is not eligible to vote"<<endl;
	}
	//writing a programme that person is eligible if person age is greater than 18
	else
	{
	cout<<"Person is eligible to vote"<<endl;
	}             
	cout<<" "<<endl;
	cout<<" "<<endl;
	
	
	
	
	
	
	
	//TASK 2
	
	//Putting the value of variable
	int x;
	cout<<"The value of integer is:";
	cin>>x;
	//If x is less than 10 or greater than 50 it is not in range
	if (x<10||x>50)
	{
	cout<<"Value of integer is not in range[10,50]"<<endl;
	}
	//If x is greater than 10 or les than 50 it is in the range
	else
	{
	cout<<"Value of integer is in range[10,50]"<<endl;
	}
	cout<<" "<<endl;
	cout<<" "<<endl;
	
	
	
	
	//TASK 3
	//Putting the values of variable num1 and num2
    int num1,num2;
    cout<<"Value of number1 is:";
    cin>>num1;
    cout<<"value of number2 is:";
    cin>>num2;
    //Making a programe that shows value of num1 or num2 is greater 
    if(num1>num2)	
{
	cout<<"NUMBER1 is greater than NUMBER2"<<endl;
}
    if(num1<num2)
{
	cout<<"NUMBER2 is greater  than NUMBER1"<<endl;
}
    cout<<" "<<endl;
    cout<<" "<<endl;





//TASK 4
//Putting values of variables a,b,c
	int a,b,c;
	cout<<"Value of a is:";
	cin>>a;
	cout<<"Value of b is:";
	cin>>b;
	cout<<"Value of c is:";
	cin>>c;
	//assigning formula for finding the average of three exam marks
	float average= (a+b+c)/3;
	//wrting a programe that person is pass if average is equal to or greater than 60
	if (average>=60)
	{
		cout<<"AVERAGE IS EQUAL TO OR ABOVE THE PASSING GRADE";
		
	}
	else
	{
	cout<<"AVERAGE IS BELOW THE PASSING GRADE";
	}
	return 0;
	
}
