#include <iostream>
#include <string.h>
#include <vector>

using namespace std;
#ifndef PARENT_H
#define PARENT_H

class Parent {
 public:
  Parent();
  //initiates variables and functions
  string description;
  int hunger;
  int health;
  vector<string*> items;

  string getDescription();
  int getHunger();
  int getHealth();
  vector<string*> getItems();

  string setDescription();
  int setHunger();
  int setHealth();
 protected:
  int id;
};

#endif
