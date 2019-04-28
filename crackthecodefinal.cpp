/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int num, guess, tries = 0;
	srand(time(0)); //seed random number generator
	num = rand() % 100 + 1; // random number between 1 and 100
	cout << "The treasure is behind this door, but first you have to crack the code to the lock!\n\n";

	do
	{
		cout << "Enter a guess, the secret code is between 1 and 100 : ";
		cin >> guess;
		tries++;

		if (guess > num)
			cout << "Too high!\n\n";
		else if (guess < num)
			cout << "Too low!\n\n";
		else
			cout << "\nYou cracked the code, but you made some noise in the process! Now you have to fight " << tries << " guards before you can get the treasure!\n";
	} while (guess != num);

	return 0;
}