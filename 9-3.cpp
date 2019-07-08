// This program finds the average of a set of grades.
// It dynamically allocates space for the array holding the grades.

#include <iostream>
#include <iomanip>
using namespace std;

// function prototypes
void sortIt (float* grades, int numOfGrades);
void displayGrades(float* grades, int numOfGrades);

int main()
{
    float *grades = nullptr;

    float total = 0;
    float average;
    int numOfGrades;
    int count;

    cout << fixed << showpoint << setprecision(2);
    cout << "How many grades will be processed " << endl;
    cin >> numOfGrades;

    while (numOfGrades <= 0) // checks for a legal value
    {
        cout << "There must be at least one grade. Please reenter.\n";
        cout << "How many grades will be processed " << endl;
        cin >> numOfGrades;
    }

    grades = new float(numOfGrades);
              // allocation memory for an array
              // new is the operator that is allocating
              // an array of floats with the number of
              // elements specified by the user. grades
              // is the pointer holding the starting
              // address of the array.

    if (grades == nullptr) {
        cerr << "Error allocating memory!\n";
        exit(1);
    }

    cout << "Enter the grades below\n";
    for (count = 0; count < numOfGrades; count++)
    {
        cout << "Grade " << (count + 1) << ": " << endl;
        cin >> grades[count];
        total = total + grades[count];
    }
    average = total / numOfGrades;
    cout << "Average Grade is " << average << "%" << endl;

    sortIt(grades, numOfGrades);
    displayGrades(grades, numOfGrades);
    delete [] grades; // deallocates all the array memory

    return 0;
}

//***************************************************
//           sortIt
//
// task:     to sort numbers in an array
// data in:  an array of floats and
//           the number of elements in the array
// data out: none
//
//****************************************************
void sortIt(float* grades, int numOfGrades)
{
    // Sort routine placed here
}

//***************************************************
//           displayGrades
// task:     to display numbers in an array
// data in:  an array of floats and
//           the number of elements in the array
// data out: none
//****************************************************
void displayGrades(float* grades, int numOfGrades)
{
    // Code to display grades of the array
}