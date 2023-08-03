#define MONKEY_H
#include "Pet.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Monkey: public Pet{
public: 

Monkey();
Monkey(string petName, int petHappiness, int petSleep, int petHunger);

void menu();
void play();
void bedTime();
void feed(); 

};  
