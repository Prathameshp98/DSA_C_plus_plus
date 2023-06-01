#include<iostream>
#include "hero.cpp"
using namespace std;

#include <cstring>


class Hero {

  private:
    int health;
    char level;

  public:
    char *name;

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

    void print(){
      cout << "Name is " << this->name << endl;
      cout << "Level is " << this->level << endl;
      cout << "Health is " << this->health << endl;
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

int main() {

  Hero h1;
  h1.setHealth(80);
  h1.setLevel('B');
  char name[7]{"Patil"};
  h1.setName(name);

  h1.print();
  cout << endl;

  // default copy constructor called
  Hero h2(h1);

  h2.print();
  cout << endl;

  h1.name[0] = 'B';

  // default copy construtor does shallow copy,
  // ie same memory is accessed
  // therefore changes in h1 is also reflected in h2
  h1.print();
  cout << endl;
  h2.print();

  // Deep Copy produces a separate copy of h2
  // Note: uncomment the created copy const

  return 0;
}