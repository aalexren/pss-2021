//
// Created by Artyom Chernitsa on 13.04.21.
//

#include "Date.h"

Date::Date(int year, int month, int day) {
   this->year = year;
   this->month = month;
   this->day = day;
}

std::string Date::toString() {
   std::string s;
   s = "(" + std::to_string(year) + "," + std::to_string(month) + "," + std::to_string(day) + ")";
   return s;
}

Date* Date::difference(Date *date) {
   return new Date(abs(this->year - date->year), abs(this->month - date->month), abs(this->day - date->day));
}
