#include <iostream>
#include "Pet.h"
#include "Cat.h"
#include "Dog.h"
#include "Monkey.h"
#include <fstream>
using namespace std;

int main() {
  cout << "Welcome to Tamagotchi Pet Game!" << endl; 
  cout << "Please pick an option and click enter" << endl;
  cout << "---------------------------------------" << endl;
  cout << "---------------------------------------" << endl; 
  cout << "(1) New Player" << endl; 
  cout << "(2) Return Player" << endl; 
  cout << "---------------------------------------"<< endl; 
  cout << "---------------------------------------" << endl;
  int amount = 0; 
  int userInput; 
  cin >> userInput; 
  cout << endl; 
  if(userInput == 1){
    cout << "Please choose your starting pet:" << endl;  
    cout << " (1) CAT" << endl; 
    cout << " (2) DOG" << endl; 
    cout << " (3) MONKEY" << endl; 
    cin >> userInput; 
    cout << endl;
    }
  else if(userInput == 2){
    cout << "Enter File name:" << endl; 
    string userFile; 
    cin >> userFile; 
    {
      cout << "File does not exist" << endl; 
      exit(-1); 
    } 
  }
  
  if(userInput == 1){
    cout << "CATS ARE ADORABLE!! PLEASE CHOOSE A PET NAME:" << endl; 
    string petsName; 
    cin >> petsName; 
    Cat pet; 
    pet.setName(petsName);
    
    do {
      
      pet.menu(); 
      cin >> userInput; 
      
      if(userInput == 1){
        pet.play(); 
    }
      if(userInput == 2){
        pet.bedTime(); 
    }
      if(userInput == 3){
        pet.feed(); 
    } 

      if(userInput == 0) {
        cout <<"THE GAME IS OVER, THANK YOU FOR PLAYING!";
        break;
    }
      if(userInput > 3 || userInput < 0) {
        cout <<"YOUR SELECTION IS INVALID, PLEASE START THE GAME AGAIN";
        break; 
    }

      if(pet.getHungerLevel() > 50){
        cout << endl; 
        cout << "THE CAT IS HUNGRY AND GETTING IRRITATED" << endl; 
        cout << endl; 
    }
      if(pet.getHappinessLevel() < 60){
        cout << endl; 
        cout << "THE CAT IS SAD AND NEEDS ATTENTION" << endl; 
        cout << endl; 
    }      
      if(pet.getHappinessLevel() > 100){
      pet.setHappinessLevel(100); 
    } 
    if(pet.getSleepLevel() > 50 ){
        cout << endl; 
        cout << "THE CAT IS SLEEPY AND RESTLESS" << endl; 
        cout << endl; 
        amount--;
      if(amount == 6){
        pet.gameOver(); 
        break; 
      }
    } 
    if(pet.getHungerLevel() > 100){
      pet.gameOver(); 
      break; 
    }
    if(pet.getHungerLevel() <= 10 ){
      pet.setHungerLevel(10); 
      cout << endl; 
      cout << "THE CAT IS BEING OVERFED WHICH IS MAKING IT SICK" << endl; 
      cout << endl; 
    }
    }
    while(userInput != 0); 
  }
  
if(userInput == 2){
    cout << "DOGS ARE SO PLAYFUL!! PLEASE CHOOSE A PET NAME:" << endl; 
    string petsName; 
    cin >> petsName; 
    Dog pet;
    pet.setName(petsName);
 do { 
      pet.menu(); 
      cin >> userInput; 
      
      if(userInput == 1){
        pet.play(); 
    }
      if(userInput == 2){
        pet.bedTime(); 
    }
      if(userInput == 3){
        pet.feed(); 
    } 

      if(userInput == 0) {
        cout <<"THE GAME IS OVER, THANK YOU FOR PLAYING!";
        break;
    }
      if(userInput > 3 || userInput < 0) {
        cout <<"YOUR SELECTION IS INVALID, PLEASE START THE GAME AGAIN";
        break; 
    }

      if(pet.getHungerLevel() > 50){
        cout << endl; 
        cout << "THE DOG IS HUNGRY AND GETTING IRRITATED" << endl; 
        cout << endl; 
    }
      if(pet.getHappinessLevel() < 50){
        cout << endl; 
        cout << "THE DOG IS SAD AND NEEDS ATTENTION" << endl; 
        cout << endl; 
    }      
    if(pet.getSleepLevel() > 60){
        cout << endl; 
        cout << "THE DOG IS SLEEPY AND RESTLESS" << endl; 
        cout << endl; 
        amount++;
      if(amount == 3){
        pet.gameOver(); 
        break; 
      }
    } 
    if(pet.getHungerLevel() < 0){
      pet.gameOver(); 
      break; 
    }
    if(pet.getHungerLevel() <= 10){
      pet.setHungerLevel(10); 
      cout << endl; 
      cout << "THE DOG IS BEING OVERFED WHICH IS MAKING IT SICK" << endl; 
      cout << endl; 
    }
   }
    while(userInput != 0); 
  } 

if(userInput == 3){
    cout << "MONKEYS ARE SO ENTERTAINING!! PLEASE CHOOSE A PET NAME:" << endl; 
    string petsName; 
    cin >> petsName; 
    Monkey pet;
    pet.setName(petsName);
 do { 
      pet.menu(); 
      cin >> userInput; 
      
      if(userInput == 1){
        pet.play(); 
    }
      if(userInput == 2){
        pet.bedTime(); 
    }
      if(userInput == 3){
        pet.feed(); 
    } 

      if(userInput == 0) {
        cout <<"THE GAME IS OVER, THANK YOU FOR PLAYING!";
        break;
    }
      if(userInput > 3 || userInput < 0) {
        cout <<"YOUR SELECTION IS INVALID, PLEASE START THE GAME AGAIN";
        break; 
    }

      if(pet.getHungerLevel() > 50){
        cout << endl; 
        cout << "THE MONKEY IS HUNGRY AND GETTING IRRITATED" << endl; 
        cout << endl; 
    }
      if(pet.getHappinessLevel()<=50){
        cout << endl; 
        cout << "THE MONKEY IS SAD AND NEEDS ATTENTION" << endl; 
        cout << endl; 
    }  
    if(pet.getHappinessLevel() > 100){
    pet.setHappinessLevel(100); 
      
    }
    if(pet.getSleepLevel() > 50){
        cout << endl; 
        cout << "THE MONKEY IS SLEEPY AND RESTLESS" << endl; 
        cout << endl; 
        amount++;
      if(amount == 5){
        pet.gameOver(); 
        break; 
      }
    } 
    if(pet.getHungerLevel() > 100){
      pet.gameOver(); 
      break; 
    }
    if(pet.getHungerLevel() <= 10){
      pet.setHungerLevel(10); 
      cout << endl; 
      cout << "THE MONKEY IS BEING OVERFED WHICH IS MAKING IT SICK" << endl; 
      cout << endl; 
    }
   }
    while(userInput != 0); 
  }

return 0; 
  }



    


