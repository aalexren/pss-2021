#include <iostream>
#include "rooms/Cabinet.h"
#include "rooms/ClassRoom.h"
#include "rooms/ConferenceRoom.h"
#include "rooms/DirectorCabinet.h"
#include "rooms/LectureRoom.h"
#include "users/Admin.h"
#include "users/Director.h"
#include "users/Employee.h"
#include "users/Professor.h"
#include "users/Student.h"

int main() {
   // ------------------------ CREATE USERS ------------------------- //
   Director director_ronaldMorin("Ronald Morin", "ronald_m1970", 12345678);

   Admin admin_denis("Denis French", "denis_f1904", 750000);
   Admin admin_allan("Allan Burt", "allan_burt1987", 90000);

   Professor prof_hafsah("Hafsah Avalos", "hafsah_a1983", 75000, "See you on retake!",
         {"Calculus", "Programming"});
   Professor prof_tedy("Tedy Jacobs", "tedy_j1995", 60000,
         "„Šťastný může být jen ten, kdo skutečně miloval jen jednou v životě.",
         {"Linear Algebra", "Czech Language"});
   Professor prof_heath("Heath Ledger", "joker", 0, "You're just too good to be true!",
         {"Law", "Love"});
   Professor prof_william("William Shakespeare", "william_best", 1597,
         "What's in a name? That which we call a rose / By any other name would smell as sweet.",
         {"Theather", "Philosophy"});

   Employee emp_leo("Leo Mithcell", "leo_1524", 93000, Laborathory::GAME);
   Employee emp_ward("Ward Frazier", "ward_2000", 115000, Laborathory::AI);
   Employee emp_tom("Tom Foster", "tom_2000", 89000, Laborathory::ROBOTICS);
   Employee emp_max("Maxwell Young", "max_well", 89000, Laborathory::ROBOTICS);
   Employee emp_sybil("Sybil Moore", "moore_psy", 89000, Laborathory::ROBOTICS);
   Employee emp_mona("Mona Larson", "mona_1515", 90000, Laborathory::AI);
   Employee emp_adela("Adéla Holandská", "kralovna_1230", 500000, Laborathory::GAME);

   Student stu_mike("Mike Ivanov", "l1va", 100000, "B20-02", 4.5);
   Student stu_iskander("Iskander Nafikov", "iskanred", 1000, "B21-02", 4.7);
   Student stu_sergey("Sergey Golubev", "pigeon_gcc", 1000, "B20-02", 4.7);
   Student stu_kennard("Kennard Berry", "ken_berry", 1000, "B23-01", 4.3);
   Student stu_trista("Trista Dean", "dean_girl", 1500, "B19-03", 5.0);
   Student stu_donald("Donald Joseph", "donald_the_king", 1000, "B17-02", 4.55);
   Student stu_gerry("Gerry Sandoaval", "gerry_snail", 1000, "B18-04", 4.5);
   Student stu_lore("Lore Peters", "loreptr", 1000, "B21-04", 5.0);
   Student stu_sara("Sara Meier", "meier_sara", 2020, "B19-01", 4.7);
   Student stu_alric("Alric Scholz", "alric_scholz", 1000, "B20-02", 4.7);
   Student stu_eleonore("Eleonore Feld", "eleonore_feld", 14556, "B21-03", 4.85);
   Student stu_august("August Roth", "august_great", 20000, "B20-01", 4.95);
   Student stu_else("Else Wegener", "else_lol", 2000, "B21-04", 5.0);
   Student stu_seva("Seva Klushev", "kiaver", 1000, "B20-02", 4.8);
   Student stu_tasneem("Tasneem Talooba", "tasneem", 1000, "B19-02", 5.0);
   Student stu_rick("Rick Sanchez", "sanchezzzz", 10000000, "M00-01", 6.0);
   // --------------------------------------------------------------- //

   // ------------------------ CREATE ROOMS ------------------------- //
   Cabinet cab_1("100-1");
   Cabinet cab_2("100-2");
   Cabinet cab_3("100-3");

   ClassRoom classRoom313("313");
   ClassRoom classRoom303("303");

   ConferenceRoom conferenceRoom("B-15");

   DirectorCabinet directorCabinet("A-1");

   LectureRoom lectureRoom108("108");
   LectureRoom lectureRoom107("107");
   // --------------------------------------------------------------- //


   std::cout << director_ronaldMorin.getInfo();
   directorCabinet.giveAccess(director_ronaldMorin);
   std::cout << prof_william.getInfo();
   directorCabinet.giveAccess(prof_william);
   std::cout << std::endl;

   std::cout << emp_adela.getInfo();
   directorCabinet.giveAccess(emp_adela);
   admin_allan.giveAccess(emp_adela, directorCabinet);
   directorCabinet.giveAccess(emp_adela);
   directorCabinet.giveAccess(prof_william);
   std::cout << std::endl;

   std::cout << prof_heath.getInfo();
   conferenceRoom.giveAccess(prof_heath);
   admin_denis.upgradeAccess(prof_heath);
   conferenceRoom.giveAccess(prof_heath);
   std::cout << prof_heath.getInfo();
   std::cout << std::endl;

   std::cout << stu_mike.getInfo();
   conferenceRoom.giveAccess(stu_mike);
   directorCabinet.giveAccess(stu_mike);
   classRoom303.giveAccess(stu_mike);
   lectureRoom107.giveAccess(stu_mike);
   std::cout << std::endl;

   std::cout << emp_mona.getInfo();
   cab_1.giveAccess(emp_mona);
   cab_2.giveAccess(emp_mona);
   cab_3.giveAccess(emp_mona);
   cab_1.giveAccess(stu_donald);
   std::cout << std::endl;

   std::cout << prof_tedy.getInfo();
   lectureRoom107.giveAccess(prof_tedy);
   lectureRoom107.giveAccess(stu_else);
   admin_denis.giveAccess(stu_else, lectureRoom107);
   lectureRoom107.giveAccess(stu_else);
   admin_denis.depriveAccess(stu_else, lectureRoom107);
   lectureRoom107.giveAccess(stu_else);
   std::cout << std::endl;

   return 0;
}
