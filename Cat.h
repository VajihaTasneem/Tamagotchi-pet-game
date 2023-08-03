#define CAT_H
#include "Pet.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Cat: public Pet{
public: 

Cat();
Cat(string petName, int petHappiness, int petSleep, int petHunger);

void menu();
void play();
void bedTime();
void feed(); 

}; 