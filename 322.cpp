#include <iostream>
using namespace std;
int main()
{

const int SIZE = 10;
int values[SIZE];   
int count;          
int largest;        
int smallest;       

cout << "Enter 10 integer values and I'll tell you the largest and the smallest number." << endl;

for (count = 0; count < SIZE; count++)
{
    cout << "\nEnter an integer value: ";
    cin  >> values[count];
}

largest = smallest = values[0];
for (count = 1; count < SIZE; count++)
{
    if (values[count] > largest)
        largest = values[count];
    if (values[count] < smallest)
        smallest = values[count];
}


cout << "\nThe largest value entered is " << largest << endl;
cout << "The smallest value entered is " << smallest << endl << endl;


 system("pause");
  return 0;   

}
