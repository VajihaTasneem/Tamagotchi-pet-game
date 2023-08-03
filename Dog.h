#define DOG_H
#include "Pet.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Dog: public Pet{
public: 

Dog();
Dog(string petName, int petHappiness, int petSleep, int petHunger);

void menu();
void play();
void bedTime();
void feed(); 

}; 