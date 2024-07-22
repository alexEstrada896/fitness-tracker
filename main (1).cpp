/*
#include <iostream>
#include <string>

using namespace std;

int main(){

  int steps;
  double hours;
  string fav, name;
  char gen;

  int check = 0;
  while(check != 1) { // loops again as long as check is not equal to 1
    // asking the user the amount of steps they have taken today
    cout << "Enter the amount of steps you took today: "; 
    cin >> steps;

    // asking user the amount of hours they slept
    cout << "Enter number of hours slept: ";
    cin >> hours;

    // asking user their favorite exorcise is
    cout << "Favorite exorcise: ";
    cin >> fav;

    // asking the gender of the user
    cout << "What is your gender? Male or Female? (M/F): ";
    cin >> gen;
    // asking the user their name
    cout << "What is your name?: ";
    cin >> name;

    // Hardcoding

    cout << "Loading Feedback...\n";

    // Determine the Ms and Mr
    if(steps >= 0 && hours >= 0 && (gen == 'M' || gen == 'F' || gen == 'm' || gen == 'f')) { // Checks if they didn't put a negative number or male or female

      if (gen == 'M' || gen == 'm') {
        cout << "Mr. " << name << "! ";
      }
      else if (gen == 'F' || gen == 'f') {
        cout << "Mrs. " << name << "! ";
      }

      if(steps > 10000) { 
        cout << "Great job on walking today. ";
      }
      else { 
        cout << "Uh oh you didn't walk enough today "; 
      }

      if(hours < 7.0) {
        cout << "You need more sleep. ";
      }
      else if(hours > 7.0) {
        cout << "Great job on having enough sleep! ";
      }
      check++; // This ends the while loop
    }

    else { // Runs if user enters a negative number and makes them enter the stuff again
      cout << "Error. Invalid input. Please try again! \n";
    } 

  } // End of while loop

  return 0;

} // End of main
*/