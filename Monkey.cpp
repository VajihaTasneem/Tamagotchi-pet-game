#include "Monkey.h"

Monkey::Monkey(){ 
  givenName = "";
  happinessAmount = 40; 
  sleepAmount = 80; 
  hungerAmount = 70;
  
  }

Monkey::Monkey(string petName, int petHappiness, int petSleep, int petHunger):
Pet(petName,petHappiness,petSleep,petHunger){
}

void Monkey::menu(){
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl; 
  cout << endl; 
  cout << "Please choose a activity for " << getName() << " !" << endl; 
  cout << endl; 
  cout << "(0) Save and quit" << endl; 
  cout << "(1) Make " << getName() << " do pull-ups and watch " << getName() << " enjoy!" << endl; 
  cout << "(2) Give " << getName() << " a warm bath and watch " << getName() << " sleep." << endl; 
  cout << "(3) Feed " << getName() << " a banana and watch " << getName() << " eat." << endl; 
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
}

void Monkey::play(){ 
  happinessAmount += 10;  
  hungerAmount += 10;
  sleepAmount += 10;

  cout << "________________________________ " << endl; 
  cout << "   VVVV               VVVV       " << endl;
  cout << "   (__)               (__)       "<< endl;
  cout << "    > <               > <        "<< endl;
  cout << "     > <   ^^|||^^   > <         "<< endl;
  cout << "      > <   _   _   > <          " << endl;
  cout << "       > < / | / | > <           "<< endl;
  cout << "        > <|_o_o_|> <            "<< endl;
  cout << "         > ( (_) ) <             "<< endl;
  cout << "          >|     |<              "<< endl;
  cout << "         ( |^___^| )             "<< endl;
  cout << "         ( (_____) )             "<< endl;
  cout << "         (         )             "<< endl;
  cout << "          (   o   )              "<< endl;
  cout << "           ) ___ (               "<< endl;
  cout << "          ( |   | )              "<< endl;
  cout << "         ( )     ( )             "<< endl;
  cout << "         ><       ><             "<< endl;
  cout << "         []       []            "<< endl;
  cout << "        '''       '''            "<< endl;
  cout << "       [You Can Do It!]          "<< endl; 
  cout << endl; 
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  cout << endl; 
  cout << "Happiness: " << getHappinessLevel() << endl; 
  cout << endl;
  cout << "Sleepiness: " << getSleepLevel() << endl; 
  cout << endl;
  cout << "Hunger: " << getHungerLevel() << endl;
  cout << endl;
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  }

void Monkey::bedTime(){ 
  happinessAmount -= 20;  
  hungerAmount += 15;
  sleepAmount -= 30;

  cout << "         .^`^.          Z"<< endl;
  cout << "     .-.[ _=_ ].-.    Z  "<< endl;
  cout << "    {  (,(oYo),) }} Z    "<< endl;
  cout << "    {{ |   *   |} }      "<< endl;
  cout << "    { { ~(---)~  }}      "<< endl;
  cout << "    {{  }'-=-'{ } }      "<< endl;
  cout << "    { { }._:_.{  }}      "<< endl;
  cout << "    {{  } -:- { } }      "<< endl;
  cout << "    {_{ }`===`{  _}      "<< endl;
  cout << "   ((((\)     (/))))     "<< endl;
        
  cout << endl;
  cout << "   [Sleepy head]    "<< endl; 
  cout << endl; 
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  cout << endl; 
  cout << "Happiness: " << getHappinessLevel() << endl; 
  cout << endl;
  cout << "Sleepiness: " << getSleepLevel() << endl; 
  cout << endl;
  cout << "Hunger: " << getHungerLevel() << endl;
  cout << endl;
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  }
  
void Monkey::feed(){ 
  happinessAmount += 50; 
  sleepAmount += 30; 
  hungerAmount -= 45;
  
  cout << "                 __,__                     "<< endl;
  cout << "        .--.  .-"     "-.  .--.            "<< endl;
  cout << "       / .. |/  .-. .-.  |/ .. |           "<< endl;
  cout << "      | |  '|  /   Y   |  |'  | |          "<< endl;
  cout << "      | |   |  | 0 | 0 /  /   / |          "<< endl;
  cout << "       | '- ,|.-*`` ``*-./, -' /           "<<endl; 
  cout << "        `'-' /_   ^ ^   _| '-'`            "<< endl;
  cout << "        .--'|  |._ _ _./  |'--.            "<< endl;
  cout << "      /`    |   |.-.  /   /    `|          "<< endl;
  cout << "     /       '._/  |-' _.'       |         "<< endl;
  cout << "    /          ;  /--~'   |       |        "<< endl;
  cout << "   /        .'||.-|--.     |       |       "<< endl;
  cout << "  /   .'-. /.-.;|  |||'~'-.||       |      "<< endl;
  cout << "  |       `-./`|_|_/ `     `|'.      |     "<< endl;
  cout << "  '.      ;     ___)        '.`;    /      "<< endl;
  cout << "     '-.,_ ;     ___)          |/   /      "<< endl;
  cout << "      |   ``'------'|       |   `  /       "<< endl;
  cout << "       '.    |       '.      |   ;/_       "<< endl;
  cout << "     ___>     '.       |_ _ _/   ,  '--.   "<< endl;
  cout << "   .'   '.   .-~~~~~-. /     |--'`~~-.  |  "<< endl;
  cout << "  // / .---'/  .-~~-._/ / / /---..__.'  /  "<< endl;
  cout << "  ((_(_/    /  /      (_(_(_(---.__    .'  "<< endl;
  cout << "           | |     _              `~~`     "<< endl;
  cout << "           | |     |'.                     "<< endl;
  cout << "            | '....' |                     "<< endl;
  cout << "             '.,___.'                      "<< endl;
  cout << endl;
  cout << "            [YUM!]                       "<< endl; 
  cout << endl; 
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  cout << endl; 
  cout << "Happiness: " << getHappinessLevel() << endl; 
  cout << endl;
  cout << "Sleepiness: " << getSleepLevel() << endl; 
  cout << endl;
  cout << "Hunger: " << getHungerLevel() << endl;
  cout << endl;
  cout << "<><><><><><><><><><><><><><><><><><><><><><><><><><><><>" << endl;
  }

  
  

