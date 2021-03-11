//
// Created by Артём Черница on 24.02.21.
//

#ifndef HW2_PROFESSOR_H
#define HW2_PROFESSOR_H

#include <string>
#include <vector>

#include "User.h"

class Professor : public User {
public:
   Professor(const std::string& name,
           const std::string& alias,
           size_t salary,
           const std::string& joke,
           const std::vector<std::string>& subjects);

   Professor(const std::string& name,
           size_t salary,
           const std::string& joke,
             const std::vector<std::string>& subjects);

   std::string getJoke();

   std::vector<std::string> getSubjects();

   std::string getInfo();

private:
   std::string joke; // favourite joke
   std::vector<std::string> subjects; // courses professor gives
};

#endif //HW2_PROFESSOR_H
