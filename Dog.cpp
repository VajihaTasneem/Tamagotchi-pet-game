#include "Dog.h"

  Dog::Dog(){ 
  givenName = "";
  happinessAmount =60; 
  sleepAmount = 60; 
  hungerAmount = 60;
  
  }

Dog::Dog(string petName, int petHappiness, int petSleep, int petHunger):
Pet(petName,petHappiness,petSleep,petHunger){
}

  void Dog::menu(){
  cout << "********************************************************" << endl; 
  cout << endl; 
  cout << "Please choose a activity for " << getName() << "!" << endl; 
  cout << endl; 
  cout << "(0) Save and quit" << endl; 
  cout << "(1) Play a ball with " << getName() << " and watch " << getName() << " race towards it!" << endl; 
  cout << "(2) Make a cozy Cuddler for " << getName() << " and watch " << getName() << " prepare to sleep and Woof" << endl; 
  cout << "(3) Reward " << getName() << " with delicious food and watch " << getName() << " enjoy!" << endl; 
  cout << "********************************************************" << endl;
}

void Dog::play(){ 
  happinessAmount += 15; 
  sleepAmount += 10; 
  hungerAmount += 10;

cout << "             .--~~,__   " << endl;
cout << ":-....,-------`~~'._.'  " << endl;
cout << " `-,,,  ,_      ;'~U'   " << endl;
cout << "  _,-' ,'`-__; '--.     " << endl;
cout << " (_/'~~      ''''(;     " << endl;     
cout << endl;
cout << "       [RUN!]           " << endl; 

cout << endl; 
cout << "********************************************************" << endl;
cout << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << endl;
cout << "********************************************************" << endl;
  }

void Dog::bedTime(){ 
  happinessAmount -= 10; 
  sleepAmount -= 15; 
  hungerAmount += 10;

cout << "      |^_^|                      " << endl;
cout << "      | @ @   Woof!              " << endl;
cout << "      |   <>              _      " << endl;
cout << "      |  _/|------____ ((| |))   " << endl;
cout << "      |               `--' |     " << endl;
cout << "  ____|_       ___|   |___.'     " << endl;
cout << " /_/_____/____/_______|          " << endl;
cout << endl; 
cout << "       [Sleepy]           " << endl; 

cout << endl; 
cout << "********************************************************" << endl;
cout << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << endl;
cout << "********************************************************" << endl;
  }

void Dog::feed(){ 
  happinessAmount += 10; 
  sleepAmount += 10; 
  hungerAmount -= 15;


cout << "              .--~~,__          " << endl;
cout << " :-....,-------`~~'._.'         " << endl;
cout << "  `-,,,  ,_      ;'~U'          " << endl;
cout << "   _,-' ,'`-__; '--.            " << endl;
cout << "  (_/'~~      ''''(;    |_____| " << endl;
               
cout << endl; 
cout << "       [Tasty!]           " << endl; 

cout << endl; 
cout << "*********************************************" << endl;
cout << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << endl;
cout << "**********************************************" << endl;
  }