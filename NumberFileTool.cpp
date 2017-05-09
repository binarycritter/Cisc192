# include <iostream>
# include <fstream>
# include <stdio.h>
# include <string>
# include <iomanip>

using namespace std;

int sumOfElements(int numArray[], int fSumVar);

int highestNumber(int numArray[]);

int lowestNumber(int numArray[]);

int main()
{
	ifstream inputFile;
	const int DECLARATOR = 12;
	int numberOfArrayElements;
	double averageOfNumbers;
	string filePath;
	int numbers[DECLARATOR];
	int arrayIndex = 0;




	cout << "Please enter the filepath of your desired directory: ";
	cin >> filePath;
	inputFile.open(filePath.c_str());

	if (inputFile)
	{
		while (arrayIndex < DECLARATOR && inputFile >> numbers[arrayIndex])
		{
			arrayIndex++;
		}
		inputFile.close();
	}
	else
	{
		cout << "Something went wrong with the while control flow statement on line 27!" << endl;;
	}

	int arrayAmount = arrayIndex;

	cout << "There are " << arrayAmount << " elements that where imported from the file to the array" << endl;
	cout << "The numbers are: ";

	for (arrayIndex = 0; arrayIndex < DECLARATOR; arrayIndex++)
	{
		cout << numbers[arrayIndex] << " ";
	}
	cout << endl;

	int arraySumVariable = sumOfElements(numbers, arrayIndex);

	cout << "The sum of the integers in the text file is: " << arraySumVariable << endl;

	int maxNumberVariable = highestNumber(numbers);

	cout << "The highest integer in the text file is: " << maxNumberVariable << endl;

	int minNumberVariable = lowestNumber(numbers);

	cout << "The lowest integer in the text file is: " << minNumberVariable << endl;

	double averageOfArray = static_cast<double>(arraySumVariable) / DECLARATOR;

	cout << "The average of the integer is: " << setprecision(4) << averageOfArray << endl;

	char c;
	cout << "Please Press any key and <ENTER> to continue... " << endl;
	cin >> c;

	return 0;
}//end of main

int sumOfElements(int numbers[], int functionSumVariable)
{

	for (int i = 0; i < 12; i++)
	{
		functionSumVariable += numbers[i];
	}
	return functionSumVariable;
}//end of sumOfElements function

int highestNumber(int numbers[])
{
	int maxNumber = 0;
	for (int i = 0; i < 12; i++)
	{

		if (numbers[i] > maxNumber)
		{
			maxNumber = numbers[i];
		}
	}
	return maxNumber;

}//end of highestNumber function

int lowestNumber(int numbers[])
{
	int minNumber = 999;
	for (int i = 0; i < 12; i++)
	{

		if (numbers[i] < minNumber)
		{
			minNumber = numbers[i];
		}
	}
	return minNumber;

}//end of lowestNumber function

