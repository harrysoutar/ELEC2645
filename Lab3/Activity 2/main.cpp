//ELEC/XJEL2645
// Dr Craig A. Evans and Dr Tim J. Amsdon

#include <iostream>
#include "funcs.h"

int main() {
  // print a random number
  int random_value = get_random_number(0,100);
  std::cout << "Random number = " << random_value << std::endl;
  
  // create array and initialise
  int array[5] = {1, 2, 3, 4, 5};
  // pass the array to the function (and its size) so we can calculate the sum
  int sum = sum_of_array(array, 5);
  std::cout << "Sum = " << sum << std::endl;
  
  // now pass to a function to square each value
  square_array(array, 5);
  std::cout << "Values in squared array:" << std::endl;
  for (int i = 0; i < 5; i++){
      std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  
  // replace each value in the array with a random number
  std::cout << "Values in random array:" << std::endl;
  for (int i = 0; i < 5; i++) {
    array[i] = get_random_number(0,100);
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  // calculate the new sum
  sum = sum_of_array(array, 5);
  std::cout << "New sum = " << sum << std::endl;

  // find the minimum value in the array
  int min_value = get_min_value(array,5);
  std::cout << "Minimum value = " << min_value << "\n";

    int myArray[20];
    for(int i = 0; i < 21; i++) {
        myArray[i] = get_random_number(0, 100);
        std::cout << "Array[" << i << "] = " << myArray[i] << std::endl;
    }

    int max_value = get_max_value(myArray, 20);
    std::cout << "Maximum value = " << max_value << std::endl;

    int n_sevens = number_of_sevens(myArray, 20);
    std::cout << "Number of sevens = " << n_sevens << std::endl;


}
