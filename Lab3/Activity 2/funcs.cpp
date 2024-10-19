#include "funcs.h"

// note that the array is described as const here so that the function cannot
// modify the contents
int sum_of_array(const int array[], int n) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += array[i];
  }
  return sum;
}
// this function needs to modify the array and so isn't const
void square_array(int array[], int n) {
  for (int i = 0; i < n; i++) {
    array[i] = array[i] * array[i];
  }
}

// this function returns a random number in the range specified
int get_random_number(int low, int high) {
  // seed (initialise) the random number generator with current time so we get 
  // a new value each time 
  int seed =
      std::chrono::high_resolution_clock::now().time_since_epoch().count();
  
  // create object of the pseudorandom generator type we want to use
  // (in this case we are using a Mersenne twister but its not important for
  // this activity)
  std::mt19937 generator(seed);
  
  // create object which maps converts the output from the pseudorandom number 
  // generator to the distribution we choose. Here we are using "uniform" like a 
  // dice roll between the out two inputs  (there are others for normal/binomial etc).
  std::uniform_int_distribution<int> distribution(low, high);
  
  // generate a number from our distribution 
  return distribution(generator);
}

// finds the minimum value in the given array 
int get_min_value(const int array[], int n) {
  int min = array[0];
  
  for (int i = 1; i < n; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }

  return min;

}

int get_max_value(const int array[], int n) {
  int max = array[n];

  for(int i = n; i > -1; i--) {
    if(array[i] > max) {
      max = array[i];
    }
  }
  return max;
}

int number_of_sevens(const int array[], int n) {
  int counter = 0;
  for(int i = 0; i < n+1; i++) {
    if(array[i] == 7) {
      counter++;
    }
  }
  return counter;
}

