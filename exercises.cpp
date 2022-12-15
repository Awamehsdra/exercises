#include<iostream>
using namespace std;
int main()
{
	//-write a program to output using while loop:1 2 3 4 5 6 7 8 9 10

	int num;
	cout << "  *welcome to my program i will help you to output number with spaces from 1----->10*\n";
	cout << "   please enter number from 1---->10\n";
	cout << " -------------------------------------------------------------------------------------\n";
	cin >> num;
	if (num > 10 || num < 0)
	{
		cout << " *Ronge number please inter number from 1----->10* ";
	}
	while (num <= 10 && num>=0)
	{


		cout << num<<"  ";
		num = num + 1;

	}
		cout << "\n";


		   //**************************************************************************************************************************

					//write a program to input 3 integers and determine which of them is biggest

	int num1, num2, num3;
	cout << "*please input 3 integers to determine which of them is biggest:*\n";
	cout << "------------------------------------------------------------------\n";
	cin>> num1>> num2>> num3;
	if (num1 > num2 > num3)
		cout <<num1<< "is biggest";
	else if (num2 > num3)
		cout <<num2 <<" is biggest";
	else
		cout <<num3<< " is biggest";


	cout <<"\n";

		  //***************************************************************************************************************************

				   //-write a program to input 3 integers and determine which of them is smallest

	int number1, number2, number3;
	cout << "*please input 3 integers to determine which of them is smallest:*\n";
	cout << "------------------------------------------------------------------\n";
	cin >> number1 >> number2 >> number3;
	if (number1 < number2 < number3)
		cout << number1 << " is smallest";
	else if (number2 < number3)
		cout << number2 << " is smallest";
	else
		cout << number3 << " is smallest";

		 //*****************************************************************************************************************************

				  //-write a program to enter a letter and determine the letter is small or capital letter

	char ch;
	cout << "\nplease enter a letter to determine the letter is small or capital letter \n";
	cout << "------------------------------------------------------------------------------\n";

	cin >> ch;
	if (ch >= 65 && ch <= 90)                //(65---->A)(90---->Z)
		cout << ch << "  capital letter";
	else if (ch >= 97 && ch <= 122)         //(97---->a)(122---->z)
		cout << ch << "  small letter";

	  //***************************************************************************************************************************************

				 //write a program to know positive and negative


	int value1 ;
	cout << "\nplease enter number to know if positive or negative\n";
	cout << "------------------------------------------------------------\n";
	cin >> value1;
	if (value1 > 0)
		cout << value1 << " is positive";
	else if (value1 < 0)
		cout << value1 << " is negative";
	else
		cout << "error you enter 0";

	 //**************************************************************************************************************************************

				  //write a program to know oddand even numbers

	int x;
	cout << "\nplease enter number to know oddand even numbers\n";
	cout << "--------------------------------------------------------\n";
	cin >> x;
	if (x % 2 == 0)
		cout << x << " is even number";
	else
		cout << x << " is odd number";


	 //***********************************************************************************************************************************

				 // write a program to calculate the SUM of positive integers and the SUM of negative integers for 6 integers

int sum_negative = 0;
int sum_positive = 0;
int Number;
int counter = 0;
while (counter < 6)
{

	cout << "\nplease enter anumber:\n";
	cout << "----------------------------------\n";
	cin >> Number;
	if (Number > 0)
	{
		sum_positive += Number;
	}
	else if (Number < 0)
		sum_negative += Number;

	counter++;
}

cout << "sum_positive=" << sum_positive << endl;
cout << "sum_negative=" << sum_negative << endl;

//*************************************************************************************************************************************


			//- write a program using DO/WHILE to compute factorial n! (المضروب .(Example 3!= 3*2*1



	int u;
	cout << "please enter number:\n";
	cout << "------------------------------\n";
	cin >> u;
	cout << u << "!=";

	while (u >2)
	{
		cout << u << "*";
		u--;
	}
	cout << u  ;
	 
	//***********************************************************************************************************************************



	//-write a program to output : -
	//	*
	//	**
	//	***
	//	****
		
	cout << "\n*\n";
	cout << "**\n";
	cout << "***\n";
	cout << "****\n";

	//************************************************************************************

	//-write a program to output : -
	//	****
	//	***
	  //**
	  //*


	cout << "\n****\n";
	cout << "***\n";
	cout << "**\n";
	cout << "*\n";
	//*************************************************************************************

	//-write a program to output : -
	//	*
	//	**
	//  ***
	// 	**
	//  m*
	  
	cout << "   *\n";
	cout << "  * *\n";
	cout << " * * *\n";
	cout << "  * *\n";
	cout << "   *\n";


	//***************************************************************************************







	return 0;
}