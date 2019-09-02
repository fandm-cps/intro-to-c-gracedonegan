
#include <iostream>

using namespace std;

int main(){

	int num = 4;
	int guess;

	while(guess != num){
		cout << "Guess an integer: ";
		cin >> guess;

		if(guess < num){
			cout << "Too low! Try again!\n";
		}

		if(guess > num){
			cout << "Too high! Try again!\n";
		}
	}

	cout << "You guessed the number!!\n";

	return 0;

}