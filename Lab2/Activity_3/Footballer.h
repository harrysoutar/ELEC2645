//
// Created by Harry Soutar on 18/10/2024.
//

#ifndef FOOTBALLER_H
#define FOOTBALLER_H

#include "Person.h"
#include <string>

class Footballer : public Person {
public:
    Footballer();
    Footballer(std::string forename, std::string surname, Date dob, std::string club, int appearances, int goals);

    void set_goals(int _goals);
    void set_appearances(int _appearances);
    std::string get_club();
    int get_appearances();
    int get_goals();

private:
    std::string _club;
    int _appearances;
    int _goals;

};



#endif //FOOTBALLER_H
