//
// Created by Artyom Chernitsa on 13.04.21.
//

#ifndef HW4_DATE_H
#define HW4_DATE_H

#include <string>

class Date {
public:
   Date(int year, int month, int day);

   Date* difference(Date* date);

   std::string toString();

private:
   int year;
   int month;
   int day;
};

#endif //HW4_DATE_H
