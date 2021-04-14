//
// Created by Artyom Chernitsa on 23.02.21.
//

#ifndef HW2_PROFESSOR_H
#define HW2_PROFESSOR_H

#include <string>
#include <vector>

#include "User.h"
#include "IGetWages.h"

class Professor : public User, public IGetWages {
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

   std::string getInfo() override;

   size_t getSalary() override;

private:
   std::string joke; // favourite joke
   std::vector<std::string> subjects; // courses professor gives
};

#endif //HW2_PROFESSOR_H
