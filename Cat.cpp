#include "Cat.h"

  Cat::Cat(){ 
  givenName = "";
  happinessAmount = 50; 
  sleepAmount = 50; 
  hungerAmount = 50;
  
  }

Cat::Cat(string petName, int petHappiness, int petSleep, int petHunger):
Pet(petName,petHappiness,petSleep,petHunger){
}

  void Cat::menu(){
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;  
  cout << "Please choose a activity for " << getName() << "!" << endl;  
  cout << "(0) Save and quit" << endl; 
  cout << "(1) Invite a buddy of " << getName() << "'s over to watch them play!" << endl; 
  cout << "(2) Pet " << getName() << " and watch " << getName() << " drifting off to sleep." << endl; 
  cout << "(3) Treat "<< getName() << " with a tasty meal and watch " << getName() << " Meow!" << endl; 
  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
}

void Cat::play(){ 
  if(happinessAmount < 100){
    happinessAmount +=25;}
  sleepAmount += 10; 
  hungerAmount += 10;
  
cout << "     |^ ^| |^ ^|         " << endl;
cout << "     (@ @) {@ @}         " << endl;
cout << "     ==~== ==o==         " << endl;
cout << "      (^)   (^)          " << endl;
cout << "      |=|   ###_         " << endl;
cout << "(    (  |  /    )      )  " << endl;
cout << " (  (   |  |     )     )  " << endl;
cout << "  )( ||||  ||||(  )   |  " << endl;
cout << " (( /||||  |||| |  )   ) " << endl;
cout << "   m !m!m  m!m! m-~(__/  " << endl;
cout << endl;
cout << "    [BEST FRIENDS!]      " << endl; 

cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  }

void Cat::bedTime(){ 
    happinessAmount -= 35;
    sleepAmount -= 25; 
    hungerAmount += 10;

cout << "   ____   ( )   " << endl;
cout << "  |_ _ |.--.) ) " << endl;
cout << "  ( T   )     / " << endl;
cout << " (((^_(((/(((_/ " << endl;
cout << endl; 
cout << "       [Sleepy]           " << endl; 
 
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  }

void Cat::feed(){ 
  happinessAmount -= 45; 
  sleepAmount += 10; 
  if(hungerAmount < 100){
    hungerAmount -=25;}

cout << "       .       .   " << endl;       
cout << "        (`-'-')    " << endl;
cout << "        } 6 6 {    " << endl;
cout << "       =.  Y  ,=   " << endl;
cout << "         (^^^)  .  " << endl;
cout << "        (     )  ) " << endl;        
cout << " Meow! (  )-(  )/  " << endl;
cout << "        ""   ""    " << endl;
  
cout << endl; 
cout << "       [Tasty!]           " << endl; 
 
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl; 
cout << "Happiness: " << getHappinessLevel() << endl; 
cout << endl;
cout << "Sleepiness: " << getSleepLevel() << endl; 
cout << endl;
cout << "Hunger: " << getHungerLevel() << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
  }