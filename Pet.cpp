#include "Pet.h"

Pet::Pet(){
  givenName = "";
  happinessAmount = 50; 
  sleepAmount = 50; 
  hungerAmount = 50;  
}
Pet::Pet(string petName, int petHappiness, int petSleep, int petHunger){ 
  givenName = petName;
  happinessAmount = petHappiness; 
  sleepAmount = petSleep; 
  hungerAmount = petHunger; 
}

void Pet::setName(string petName){
givenName = petName;
  }

string Pet::getName() {
  return givenName;
}

void Pet::setHappinessLevel(int petHappiness){
happinessAmount = petHappiness;
  }
void Pet::setSleepLevel(int petSleep){
sleepAmount = petSleep;
  }
void Pet::setHungerLevel(int petHunger){
hungerAmount = petHunger;
  }

int Pet::getHappinessLevel(){
  return happinessAmount;
}
int Pet::getSleepLevel(){
  return sleepAmount;
}
int Pet::getHungerLevel(){
  return hungerAmount;
}

void Pet::gameOver(){
  cout << "SORRY " << getName() << " EXPIRED DUE TO LACK OF CARE" << endl;          
} 
