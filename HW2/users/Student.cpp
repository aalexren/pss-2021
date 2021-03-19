//
// Created by Artyom Chernitsa on 23.02.21.
//

#include <string>

#include "../Enums.h"
#include "Student.h"

Student::Student(const std::string& name,
        const std::string& alias,
        size_t salary,
        const std::string& group,
        double gpa)
: User(name, alias, AccessLevel::GREEN, salary) {
   this->group = group;
   this->gpa = gpa;
}

Student::Student(const std::string& name,
        size_t salary,
        const std::string& group,
        double gpa)
: User(name, AccessLevel::GREEN, salary) {
   this->group = group;
   this->gpa = gpa;
}

std::string Student::getGroup() {
   return group;
}

double Student::getGPA() {
   return gpa;
}

size_t Student::getSalary() {
   return salary;
}