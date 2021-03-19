//
// Created by Artyom Chernitsa on 19.03.21.
//

#include "FireAlarm.h"

FireAlarm::FireAlarm() {
   isFire = false;
}

void FireAlarm::attach(Observer* obs) {
   views.push_back(obs);
}

void FireAlarm::startFireAlarm() {
   isFire = true;
   notify();
}

void FireAlarm::stopFireAlarm() {
   isFire = false;
   notify();
}

bool FireAlarm::getFireAlarmStatus() {
   return isFire;
}

void FireAlarm::notify() {
   for(auto& v: views) {
      v->update();
   }
}