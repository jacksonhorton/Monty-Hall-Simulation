#include <random>
#include <iostream>
#include <iomanip>

using namespace std;

// function prototypes
int random(int l, int h);
void monty_hall(int& stay_wins, int& swap_wins);
void simulate(int num_iterations);


int main() {
  // get number of runs to perform from user
  int num_iterations = 0;
  cout << "How many times do you want to run the Monty Hall problem? ";
  cin >> num_iterations;

  // runs simulation
  simulate(num_iterations);
  
  return 0;
}


void simulate(int num_iterations) {
  // varible to store number of wins for both swap and stay strategies
  int stay_wins = 0;
  int swap_wins = 0;

  // runs Monty Hall probem num_iterations times
  for(int i = 0; i < num_iterations; i++) {
    monty_hall(stay_wins, swap_wins);
  }

  // calculations for win percentages for both staying and swapping
  double swap_percent, stay_percent = 0;
  swap_percent = ( (double) swap_wins / num_iterations ) * 100;
  stay_percent = ( (double) stay_wins / num_iterations ) * 100;

  // sets precision
  cout << fixed << setprecision(2);

  // output results of the simulations
  cout << "Ran " << num_iterations << " iterations of the Monty Hall problem:" << endl
       << "\tSwap wins: " << swap_wins << "\tPrecentage: " << swap_percent << "%" << endl
       <<"\n\tStay wins: " << stay_wins << "\tPrecentage: " << stay_percent << "%" << endl;
}


void monty_hall(int& stay_wins, int& swap_wins) {
  // a true represents a car/win, a false represents a goat/loss
  // creates an array to store the door values
  bool doors[3];

  // get random number (index) to select which door the car(true) is behind
  int rand_door = random(0, 2);
  
  // loads the array with either true (car) or false (goat)
  for(int i = 0; i < 3; i++) {
    if (i == rand_door)
      doors[i] = true;
    else
      doors[i] = false;
  }

  /* 
     We will assume that the user always selects the first door, index 0.
     Now, reguardless of which door is opened to reveal a goat, what is
     behind the first door does not change. If the car is behind the first
     door, then either way, we would win by staying; in any other case, we
     would win by swapping doors, so a swap win. By this logic, I set up
     this if statement which basically says: if the first door is true (car),
     then it is a stay win, so increment stay_wins, else, it would be a swap
     win, so increment swap_wins.
  */
  if (doors[0]) 
    stay_wins++;
  else
    swap_wins++;
}


//
int random(int l, int h){
  /*
    returns a random integer between the lower and the higher bound, not including the higher bound
  */
  return (rand() % (h + 1) ) + l;
}
