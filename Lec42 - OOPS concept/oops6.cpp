#include<iostream>
#include "hero.cpp"
using namespace std;
#include <cstring>

using namespace std;

class Hero {

  private:
    int health;
    char level;

  public:
    char *name;
    // static data member belongs to class
    // i.e. no need to create object to create static 
    // member
    static int timeToComplete;

    Hero(){
      name = new char[100];
      cout << "simple constructor called" << endl;
    }

    Hero(int health){
      this->health = health;
    }

    Hero(int health, char level){
      this->health = health;
      this->level = level;
    }

    // copy constructor
    Hero(Hero& temp){
      cout << "Deep Copy constructor called" << endl;

      // new copy of name array is produced
      char *ch = new char[strlen(temp.name) + 1];
      strcpy(ch, temp.name);
      
      this->name = ch;
      this->health = temp.health;
      this->level = temp.level;
    }

    // Destructor
    ~Hero(){
      cout << "Destructor called" << endl;
    }

    void print(){
      // cout << "Name is " << this->name << endl;
      cout << "Level is " << this->level << endl;
      cout << "Health is " << this->health << endl;
    }

    static int random(){
      cout << timeToComplete << endl;
    }

    int getHealth(){
      return health;
    }

    void setHealth(int h){
      health = h;
    }

    char getLevel(){
      return level;
    }

    void setLevel(char l){
      level = l;
    }

    void setName(char n[]){
      strcpy(this->name, n);
    }
};

int Hero::timeToComplete{5};

int main() {

  cout << Hero::timeToComplete << endl;

  Hero a;
  cout << a.timeToComplete << endl;

  Hero b;
  b.timeToComplete = 10;
  cout << a.timeToComplete << endl;
  cout << b.timeToComplete << endl;

  
  cout << "static:" <<Hero::random() << endl;
  
  return 0;
}