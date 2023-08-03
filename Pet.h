#pragma once

#ifndef PET_H
#define PET_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std; 

class Pet {

public:
Pet();
Pet(string petName, int petHappiness, int petSleep, int petHunger); 

void setName(string petName);
void setHappinessLevel(int petHappiness); 
void setSleepLevel(int petSleep); 
void setHungerLevel(int petHunger); 

string getName();
int getHappinessLevel();
int getSleepLevel();
int getHungerLevel();

void gameOver(); 

protected: 
string givenName; 
int happinessAmount; 
int sleepAmount; 
int hungerAmount; 

};
#endif
