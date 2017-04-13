#include <iostream>



void populateArray(int *array, int arraySize)
{
	int i = 0;
	std::cout << "Please enter test score number " << (i + 1) << " : ";
	std::cin >> *(array);
	while (i < arraySize)
	{
		if (*(array + i) >= 0)
		{
			i++;
			std::cout << "Please enter test score number " << (i + 1) << " : ";
			std::cin >> *(array + i); // pretty cool stuff! hope it works!
		}
		else
		{
			std::cout << "You can't have negative test scores, sorry, please try again : ";
		}
	}
}// end of populateArray function

double getAverage(int *array, int arraySize) {
	long int total = 0;
	for (int i = 0; i <= arraySize; i++) {
		total += *(array + i);
	}
	return (static_cast<double>(total) / (arraySize + 1));
}// end of getAverage function

void sortArray(int *array, int arraySize)
{
	bool sorted = false;
	int temp;
	while (!sorted) {
		sorted = true;
		for (int i = 0; i < arraySize; i++)
		{
			if ((*(array + i)>*(array + i + 1))) {
				sorted = false;
				temp = *(array + i);
				*(array + i) = *(array + i + 1);
				*(array + i + 1) = temp;
			}
		}
	}
}//end of SortArray

void printArray(int *array, int arraySize) {
	for (int i = 0; i < arraySize + 1; i++) {
		std::cout << *(array + i) << ' ';
	}
	std::cout << std::endl;
}// end of printArray fucntion

int main()
{
	int arraySize;
	double arrayAverage; 
	std::cout << "How many test scores do you want to store ? : ";
	std::cin >> arraySize;
	arraySize--;
	int *gradeScores = new int[arraySize];
	populateArray(gradeScores, arraySize);
	sortArray(gradeScores, arraySize);
	arrayAverage = getAverage(gradeScores, arraySize);
	printArray(gradeScores, arraySize);
	std::cout << "The average of the array is : " << arrayAverage << std::endl;
	char c;
	std::cout << "Please Press any key and <ENTER> to continue... " << std::endl;
	std::cin >> c;
	delete [] gradeScores;
	return 0;
}//end of main
