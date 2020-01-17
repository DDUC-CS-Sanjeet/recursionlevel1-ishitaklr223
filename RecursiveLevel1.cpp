#include<iostream>
#include<cstdlib>
using namespace std;
void factorial_it(int num)
{
   int fact = 1, i;    
   for(i=1; i<=num; i++)
      fact = fact * i; 
   cout<<"Factorial of "<< num <<" through Iteration is: "<<fact<<endl;
}
int factorial(int n)
{
    if(n > 1)
        return n * factorial(n - 1);
    else
        return 1;
}
int gcd_it(int a,int b)
{
	int temp=0;
	while(b!=0)
	 {
	 	temp=a;
	 	a=b;
	 	b=temp%b;
	 
	}
	return a;
}
int gcd(int a, int b)
{
	if(b!=0)
	    return gcd(b, a%b);
	else
	    return a;
}
int power_it(int b, int e)
{
	int result=1;
	for(int i=1; i<=e; i++)
	    result*=b;
	return result;
}
int power(int b, int e)
{
	if(e!=0)
	    return b*power(b, e-1);
	else
	    return 1;
}
void fibonacci_it(int n)
{
	int x=0,y=1,z=0;
	for(int i=0;i<n;i++)
	{
	cout<<x<<" ";
	z=x+y;
	x=y;
	y=z;
    }
}
void fibonacci(int n)
{
	static int x=0,y=1,z;
	if(n>0)
	{
		z=x+y;
		x=y;
		y=z;
		cout<<z<<" ";
	    fibonacci(n-1);	
	}
	
}

int main()
{
	int choice, number, num1, num2, base, exponent, elements;
	char choice2;
	do
	{
	cout<<"\t Menu \n";
	cout<<"1. Factorial"<<endl;
	cout<<"2. GCD \n";
	cout<<"3. Power\n";
	cout<<"4. Fibonacci \n";
	cout<<"Enter your choice: ";
	cin>>choice;
	system("cls");
	switch(choice)
	{
		case 1: cout<<"Enter the number to find its factorial: ";
		        cin>>number;
		        factorial_it(number);
		        cout<<"The factorial of "<<number<<" through recursion is: "<<factorial(number)<<endl;
		        break;
		case 2: cout<<"Enter the numbers to find their GCD: ";
		        cin>>num1>>num2;
		        cout<<"The GCD of the two numbers "<<num1<<" and "<<num2<<" through iteration is: "<<gcd_it(num1, num2)<<endl;
		        cout<<"The GCD of the two numbers "<<num1<<" and "<<num2<<" through recursion is: "<<gcd(num1, num2)<<endl;
		        break;
		case 3: cout<<"Enter the base and exponent to evaluate: ";
		        cin>>base>>exponent;
		        cout<<"Value after evaluation through iteration: "<<power_it(base, exponent)<<endl;
		        cout<<"Value after evaluation through recursion: "<<power(base, exponent)<<endl;
		        break;
		case 4: cout<<"Enter the number of elements to print fibonacci series: ";
		        cin>>elements;
		        cout<<"Series through iterative function..."<<endl;
		        fibonacci_it(elements);
		        cout<<"\n Series through recursive function..."<<endl;
		        cout<<"0 1 ";
		        fibonacci(elements-2);
		        break;
		default: cout<<"Wrong choice of option!!!"<<endl;
    }
	cout<<"\n Do you want to operate more: (Y/N)";
	cin>>choice2;
	system("cls");	        
	}while(choice2=='y'||choice2=='Y');
	return 0;
}
