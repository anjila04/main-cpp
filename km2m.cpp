
//Name:  Anjila Raya
//Email:  anjila.raya48@myhunter.cuny.edu
//Date:  May 9,2024
//converts kilometers to miles

#include <iostream>
using namespace std;

int main()
{
  float kilometers;
  cout << "Enter the number of kilometers: ";
  cin >> kilometers;

  float miles;
  miles = 0.621371 * kilometers;
  cout << "Miles: " << miles << endl;

  return 0;
}
