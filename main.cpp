#include <iostream>
#include <string.h>
#include <vector>
#include "Inv.h"

using namespace std;
/*initial ideas:
function to print current room's description (in the room's cpp file) if a
player picks up an item from the room, the description will change
there are also chance effects that can occur and will appear in the
description if they occur. the way these effects will then transfer to
the player will be through getHealth/getHunger functions (this will be in the 
parent class)
function to pick up or drop an item (each room and the player will be like
a database
therefore, each room and the player will need a cpp file and a header file
and there needs to be a parent class
function to drop an item
function to go to an adjacent room (would need the player to input the room
name) (then it would print out the new room's description using the printroom
function) (then items can only be exchanged between the player and this new
room) (any effects of the new room would then be applied to the character's
health or hunger [just an 'int health']
something will need to keep track of how many rounds have passed -> add a
int roundcounter to the switchroom function. start at 1, then add one each
time the function occurs*/
