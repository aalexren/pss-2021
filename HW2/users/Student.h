//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_STUDENT_H
#define HW2_STUDENT_H

#include <string>

#include "User.h"

class Student : public User {
public:
   Student(const std::string& name,
           const std::string& alias,
           size_t salary,
           const std::string& group,
           double gpa);

   Student(const std::string& name,
           size_t salary,
           const std::string& group,
           double gpa);

   std::string getGroup();

   double getGPA();

private:
   std::string group;
   double gpa; // average score
};

#endif //HW2_STUDENT_H
