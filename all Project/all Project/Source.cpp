#include<iostream>
#include<cmath>

using namespace std;
int main()
{
	int program;
	double num, num1, num2, num3;
	double x, y, balance;
	int z, age;
	int fact = 1;
	char oper, choice;
	const double pi = 3.14;
	string name, phone;
	cout << "\n================================================ Enter the number of brogram ===============================================" << endl;
	cout << "1- add 2 numbers \n2- area of acircle \n";
	cout << "3- find the the highest and lowest value \n";
	cout << "4- square root \n5- nearest integer \n";
	cout << "6- positive and negative \n";
	cout << "7- enen and odd \n8- students grade \n";
	cout << "10- calculator \n11- factorial value \n";
	cout << "12- odd numbers \n";
	cin >> program;
	switch (program) {
	case 1:
		double sum;
		cout << "\n========================================= welcome to calculator add 2 numbers ==========================================" << endl;
		cout << "Enter your 1st number : ";
		cin >> num1;
		cout << "Enter your 2nd number : ";
		cin >> num2;
		sum = num1 + num2;
		cout << num1 << "+" << num2 << "=" << sum << endl;
		break;
	case 2:
		cout << "\n============================================== Calculate area of a circle ==============================================" << endl;
		double r, area;
		cout << "Enter radius of the circle : ";
		cin >> r;
		area = pi * (pow(r, 2));
		cout << pi << "*" << pow(r, 2) << "=" << area << endl;
		break;
	case 3:
		cout << "\n====================================== program find the highest and lowest avlue =======================================" << endl;
		cout << "Enter 2 numbers to check the highest and lowest value :" << endl;
		cin >> x >> y;
		cout << "the highest value is : " << fmax(x, y) << endl;
		cout << "the lowest value is : " << fmin(x, y) << endl;
		break;
	case 4:
		cout << "\n=============================================== program find square root ===============================================" << endl;
		cout << "Enter your number to find the square root :";
		cin >> x;
		cout << "the square root is : " << sqrt(x);
		break;
	case 5:
		cout << "\n=========================================== program find the nearest integr ============================================" << endl;
		cout << "Enter your number to find the nearest integer from it :  ";
		cin >> x;
		cout << "the nearest integer is : " << round(x);
		break;
	case 6:
		cout << "\n==================================== program find the positive and negative number =====================================" << endl;
		cout << "Enter an integer : ";
		cin >> x;
		if (x > 0) {
			cout << "You enterd a positive integer : " << x << endl;
		}
		else if (x < 0) {
			cout << "you enterd a negative integer : " << x << endl;
		}
		else {
			cout << "your enter a : 0" << endl;
		}
		break;
	case 7:
		cout << "\n========================================= program find the even and odd number =========================================" << endl;
		cout << "Enter an integer : ";
		cin >> z;
		if (z % 2 == 0) {
			cout << "You enterd even number : " << z << endl;
		}
		else if (z % 2 != 0) {
			cout << "you enterd odd number : " << z << endl;
		}
		break;
	case 8:
		cout << "\n======================================= Write a Program to check Students grades ========================================" << endl;
		double grade;
		cout << "Please enter your grade : ";
		cin >> grade;
		if (grade >= 90 && grade <= 100)
			cout << "Excellent";
		else if (grade >= 75 && grade < 90)
			cout << "Very good";
		else if (grade >= 60 && grade < 75)
			cout << "good";
		else if (grade >= 50 && grade < 60)
			cout << "pass";
		else if (grade >= 0 && grade < 50)
			cout << "sorry you failed";
		else
			cout << "please enter garde from 0 to 100";
		break;
	case 9:
		cout << "\n============================================ find the max of three numbers =============================================" << endl;
		cout << "Please enter three number ";
		cin >> num1 >> num2 >> num3;
		if (num1 >= num2 && num1 >= num3)
			cout << "the highest number is : " << num1;
		else if (num2 >= num1 && num2 >= num3)
			cout << "the highest number is : " << num2;
		else
			cout << "the highest number is : " << num3;
		break;
	case 10:
		cout << "\n======================================================= calcuator ======================================================" << endl;
		cout << "Enter an operator ( + , - , * , / ) : ";
		cin >> oper;
		cout << "Enter 2 numbers : \n";
		cin >> num1 >> num2;
		switch (oper) {
		case '+':
			cout << num1 << "+" << num2 << "=" << num1 + num2;
			break;
		case'-':
			cout << num1 << "-" << num2 << "=" << num1 - num2;
			break;
		case '*':
			cout << num1 << "*" << num2 << "=" << num1 * num2;
			break;
		case'/':
			cout << num1 << "/" << num2 << "=" << num1 / num2;
			break;
		default:
			cout << "Error ! The operator is not correct" << endl;
			break;
			return(0);
		}
	case 11:
		cout << "\n==================================================== factorial value ===================================================" << endl;
		cout << "Enter a integer number : ";
		cin >> num;
		for (int i = 1; i <= num; i++) {
			fact *= i;
		}
		cout << "factorial value is : " << fact << endl;
		break;
	case 12:
		cout << "\n==================================================== find odd numbers ==================================================" << endl;
		cout << "Enter a integer number :";
		cin >> num;
		for (int i = 1; i <= num; i = i + 2)
			cout << "The odd numbers is : \n" << i << endl;
		break;
	case 13:
		cout << "\n================================================ Create Bank Account =================================================  " << endl;
		cout << "Enter your name : ";
		cin >> name;
		cout << "Enter your age : ";
		cin >> age;
		cout << "Enter your phone : ";
		cin >> phone;
		cout << "Enter your starting balance : ";
		cin >> balance;
		cout << "\n================================ Congratulations " << name << " Your Account Is Created =============================== " << endl;
		while (true) {

		}
	}



}