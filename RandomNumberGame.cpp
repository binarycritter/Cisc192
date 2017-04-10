#include <iostream>
#include <cstdlib>
#include <ctime>

// REMINDER: You need to change this to accept the number 1 as a guess in the user input

using namespace std;

int main(void)
{
	//random number seed bellow
	srand(time(NULL));
	/* initialized and declared variables bellow. */
	
	// System number is stored in here.
	
	 // User guess is stored in here.
	int guess;
	 // Number of tries is stored here. Pro tip, it is a counter variable!
	int tries = 0;
	 // User answer to question is stored here.
	char answer;
	// Boolean Sentinel Value
	bool test = false;
	
	// main outer loop
	do 
	{ 
		int number = rand() % 99 + 2;		  

		 // Get user number loop.		 
		while (!test) 
		{ 
			//Prompt user for number
			cout << "Enter a number between 1 and 100 (" << 20 - tries << " tries left): ";
			cin >> guess;
			cin.ignore();

			
			if (tries >= 20) 
			{
				break;
			}

			// first check ceiling, then the floor, else user guessed correct number
			if (guess > number) 
			{
				cout << "The number you guessed was too high! Please try again.\n";
			}
			else if (guess < number)
			{
				cout << "The number you guessed was too low! Please try again.\n";
			}
			else 
			{
				break;
			}

			// If numbrt is incorrect, increment tries variable
			tries++;
		} // end of user number loop

		
		if (tries >= 20) 
		{
			cout << "Sorry! You ran out of tries!\n\n";
		}
		else 
		{
			
			cout << "Congratulations!! " << std::endl;
			cout << "You got the number right in " << tries << " tries!\n";
		}
		
		// Loop to ask user is he/she would like to play again.

		while (true) 
		{
			cout << "Would you like to play again (Y/N)? ";
			cin >> answer;
			cin.ignore();

			// Check if proper response.
			if (answer == 'n' || 'N' == answer  || answer == 'y' || 'Y' == answer) 
			{
				break;
			}
			else 
			{
				cout << "Please enter Y or N to exit the program:\n";
			}
		}

		// Check user's input and run again or exit;
		if (answer == 'n' || 'N' == answer) 
		{
			cout << "Thanks for playing!";
			break;
		}
		else 
		{
			cout << "\n\n\n";
		}
	} while (test); // end of main outer loop

	// Safely exit.
	cout << "\n\nPLease press any key and <ENTER> to exit. . . ";
	cin.ignore();
	return 0;
}// End Of Line
