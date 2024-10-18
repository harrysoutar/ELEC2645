//ELEC/XJEL2645
// Dr Craig A. Evans, Dr Tim J. Amsdon and Dr James Avery

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Footballer.h"

int main() {
    // create a 'default' Person object
    Person person;
    // default person is called 'Alex'
    std::cout << person.get_forename() << std::endl;
    // we can assign all the object properties using a initialiser list
    person = {"Peter", "Rabbit", {17, Month::Apr, 1947}};
    // person is now called 'Peter'
    std::cout << person.get_forename() << std::endl;

    // can also create a specific person using the constructor
    Person another_person("Ada", "Lovelace", {10, Month::Dec, 1815});

    std::cout << another_person.get_forename() << " was born on "
              << another_person.get_dob() << std::endl;

    Person Myself("Harry", "Soutar", {18, Month::Feb, 2004});

    std::cout << Myself.get_forename() << "'s date of birth is: " << Myself.get_dob() << std::endl;


    // Now create a student object
    Student student;
    // default student is called 'Alex' like the person
    std::cout << student.get_forename() << std::endl;
    // now we'll assign a profile to the student using a list
    student = {"Margaret", "Hamilton", {17, Month::Aug, 1936}, 201123456, 99.9};
    std::cout << student.get_forename() << " has an average of "
              << student.get_grade() << "\%. Wow! What a genius!\n";


    Footballer myFootballer("Bob",
        "Bobbly",
        {22, Month::Dec, 1779},
        "Aston Villa",
        500,
        1);
std::cout
    << "Mr."
    << myFootballer.get_surname()
    << " Has appeared over "
    << myFootballer.get_appearances()
    << " times in his career, yet only scored "
    << myFootballer.get_goals()
    << " time"
    << std::endl;
  return 0;
}