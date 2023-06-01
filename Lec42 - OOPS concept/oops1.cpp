#include<iostream>
#include "hero.cpp"
using namespace std;

class Hero {

  private:

    int health;
    char level;

  public:

    Hero(){
      cout << "constructor called" << endl;
    }

    Hero(int health){
      cout << this << endl;
      this->health = health;
    }

    Hero(int health, char level){
      cout << this << endl;
      this->health = health;
      this->level = level;
    }

    void print(){
      cout << "Level is " << level << endl;
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
};


int main() {

    Hero h1(55);

    cout << "Address of h1: " << &h1 << endl;

    cout << h1.getHealth() << endl;

    Hero *h2 = new Hero;

    cout << h2->getHealth() << endl;
    cout << (*h2). getHealth() << endl;

    Hero *h3 = new Hero(22, 'A');

    cout << h3->getLevel() << endl;
    cout << h3->getHealth() << endl;
    

    return 0;
}