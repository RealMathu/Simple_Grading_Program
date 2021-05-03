
#include<iostream>

using namespace std;
int main() {

	int numberGrade;

	//This part greets the user to the program
	cout << "Welcome to our grading program, please enter your precentage grade we will give you the letter that is equivalent." << endl;
	cin >> numberGrade;

	//This part checks if the user has entered a valid number and if user does not enter valid number the program ends
	if (numberGrade < 0 || 100 < numberGrade) {
		cout << "Please enter a valid number from 0 - 100" << endl;
		return 0;
	}
	
	// This portion of code checks the user input and using if and if else statements determines which letter grade is equivalent
	if (numberGrade >= 0 && numberGrade <= 49) {
		cout << "Your letter grade is F" << endl;
	}
	else if (numberGrade >= 50 && numberGrade <= 59){
		cout << "Your letter grade is D" << endl;
	}
	else if (numberGrade >= 60 && numberGrade <= 69) {
		cout << "Your letter grade is C" << endl;
	}
	else if (numberGrade >= 70 && numberGrade <= 79) {
		cout << "Your letter grade is B" << endl;
	}
	else {
		cout << "Your letter grade is A" << endl;
	}

	// This is a output statment saying goodbye to the user.
	cout << "Thank you for using the program, have a nice day." << endl;

}