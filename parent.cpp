#include <iostream>
#include <string.h>
#include <vector>
#include "Parent.h"

using namespace std;

Parent::Parent() {
  //define variables to 0 or blank
  int health = 10;
  int hunger = 3;
  vector<string*> items;
}
//define get and set functions
string description::getDescription() {
  return description;
}

int health::getHealth() {
  return health;
}

int hunger::getHunger() {
  return hunger;
}

void Parent::setDescription(string newDescription) {
  description = newDescription;
}

void Parent::setHealth(int newHealth) {
  health = newHealth;
}

void Parent::setHunger(int newHunger) {
  hunger = newHunger;
}

vector<string*>::getItems() {
  vector<string*>::iterator n, end;
  for (n = items.begin(), end = items.end(); n != end; ++n) {
    return *n;
  }
}
