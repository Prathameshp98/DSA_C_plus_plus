#include<iostream>
#include "hero.cpp"
using namespace std;

class Hero {

  private:
    int health;
    char level;

  public:

    Hero(){
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
      cout << "Copy constructor called" << endl;
      this->health = temp.health;
      this->level = temp.level;
    }

    void print(){
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

    
};


int main() {

    Hero man(70, 'C');
    man.print();
  
    // another man is copy of man
    // copy constructor called
    Hero anotherMan(man);

    cout << anotherMan.getHealth() << endl;
    cout << anotherMan.getLevel() << endl;
    anotherMan.print();
    
    

    return 0;
}