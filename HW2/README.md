## Implement the univerity access system
### Programming course assignment №2, №3

#### Simplifications and assumptions:  
- We have next user types: students, professors, lab employees, isDirector, admins.
- We have rooms: class room, lecture room, conference room, cabinet, isDirector cabinet.
- We have next access level: blue, green, yellow, red, no level
- By default user has his access level for rooms but admins can grant additional custom access to any room.

#### Requirements:
- Use OOP.
- Generate some users (at least 1 isDirector, 2 admins, 4 professors, 8 employees, 16 students should exist in the system).
- Show different examples of system usage in the main function.(For example: Professor Shilov trying to open isDirector cabinet and got no access)
- Try to implement the system as real as you can. It means users has names, rooms has room numbers, professors have favorite joke. You can skip most unnecessary data (like photo), but add at least one to show that the system is real.
- Use C++
- Do not put all code in one file.
- The code should be readable, easily modifiable, easy extendable.
- If something was not mentioned - it means on your choice.
- Add guest account to the system
- Add blue access level that is lower than green and works only for all lecture rooms, and conference rooms on the first floor (it should be guest level by default).
- In case of an emergency, all rooms should be opened - available for everybody.

#### The idea
All the rooms inherit the Room class. Director's room has specific
access function `giveAccess`, because there is only isDirector in the university.
All the rooms has following fields:
- `getNumber()` => number of room
- `getType()` => returns string: conference room, cabinet, etc. 
- `getAccessLevel()` => returns `AccessLevel` member: RED, YELLOW, GREEN, NO_LEVEL
- `getGrantedUsers()` => returns list of granted users for this room
- `giveAccess()` => starts the checking to give access for the user

All the users inherit from User class.
All the users have the following fields:
- `getName()` => returns string of First and Last name
- `getAlias()` => returns telegram alias
- `getAccessLevel()` => // same as for rooms //
- `getSalary()` => returns salary amount
- `getID()` => field with unique value to avoid collisions
- `getInfo()` => returns a descrtiption of mani user's data
- `amIDirector()` => special field to check if user is isDirector

The idea is pretty simple. Only field every Room and User has is Admin friend variable.
It should be used to get access to private fields and manipulate with lists of granted users.
I decided it can be relevant, becuase in the real life admin can do it.

In addition, there are two small enums:
- AccessLevel
- Laborathory

`Laborathory` can be implemented as classes, but for this task this is extra.

Architecture provides possibility to expand features, add new rooms, users and functionality.
There are few obstacles I faced with, e.g. class for logging, creating instances in the main.
Although it seems better to implement, but still I can't come up with importance of temporary solutions (they are temporary anyway).

In the `main.cpp` file you can find examples of using created classes.
There are brief demonstration of getting access, changing rights and showing various roles. 

For fire alarm event has been used Observer pattern, and every class predecessor of Room has to take in the FireAlarm object to have possibility to be notified.

The room is open for everybody who has a higher or equal access level. (except director cabinet) 

#### Dependencies
- C++ 17
- CMake 3.15

#### How to build
1. Download the source code
2. Open terminal, go to source code folder
3. Run cmake `cmake`
4. Run make `make`
5. Run executable file `./HW2`

(if there is any problem try to give access with `chmod` command to executable file)
