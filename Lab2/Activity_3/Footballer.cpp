//
// Created by Harry Soutar on 18/10/2024.
//

#include "Footballer.h"
//constructors
Footballer::Footballer() : Person() {}
Footballer::Footballer(std::string forename, std::string surname, Date dob, std::string club, int appearances, int goals)
    : Person{forename, surname, dob}, _appearances{appearances}, _goals{goals} {}
//mutators
void Footballer::set_appearances(int appearances) {
    _appearances = appearances;
}
void Footballer::set_goals(int goals) {
    _goals = goals;
}
//accessors
std::string Footballer::get_club() {
    return _club;
}

int Footballer::get_appearances() {
    return _appearances;
}

int Footballer::get_goals() {
    return _goals;
}

