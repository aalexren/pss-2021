//
// Created by Artyom Chernitsa on 19.03.21.
//

#ifndef HW2_FIREALARM_H
#define HW2_FIREALARM_H

#include <string>
#include <vector>

//#include "Observer.h"

// Moreover, I use Observer pattern to notify rooms when fire is hold.
// Rooms – Observers, FireAlarm – Subject

class FireAlarm {
private:
   std::vector<class Observer*> views;
   bool isFire; // false – no, true – yes

public:
   FireAlarm();

   void attach(Observer* obs);

   void startFireAlarm();

   void stopFireAlarm();

   bool getFireAlarmStatus();

   void notify();

};

class Observer {
private:
   FireAlarm* model;
protected:
   FireAlarm* getSubject() {
      return model;
   }
public:
   explicit Observer(FireAlarm* fireAlarm) {
      model = fireAlarm;
      model->attach(this);
   }

   virtual void update() = 0;
};

#endif //HW2_FIREALARM_H
