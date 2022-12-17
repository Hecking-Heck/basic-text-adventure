#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string location = "room";
  string action;
  vector<string> inventory;

  while (true) {
    cout << "You are in a " << location << "." << endl;
    cout << "What do you want to do? ";
    cin >> action;

    if (location == "room") {
      if (action == "go north") {
        location = "hallway";
      } else if (action == "look around") {
        cout << "You see a door to the north, a bed in the corner, and a chest in the corner." << endl;
      } else if (action == "open chest") {
        cout << "You find a key in the chest." << endl;
        inventory.push_back("key");
      } else {
        cout << "I don't understand that action." << endl;
      }
    } else if (location == "hallway") {
      if (action == "go south") {
        location = "room";
      } else if (action == "look around") {
        cout << "You see a long hallway with doors on either side." << endl;
      } else if (action == "use key") {
        if (find(inventory.begin(), inventory.end(), "key") != inventory.end()) {
          cout << "You unlock the door and enter the next room." << endl;
          location = "next room";
        } else {
          cout << "You don't have a key." << endl;
        }
      } else {
        cout << "I don't understand that action." << endl;
      }
    } else if (location == "next room") {
      // Add more actions and locations here
    }

    if (action == "inventory") {
      if (inventory.empty()) {
        cout << "You don't have any items." << endl;
      } else {
        cout << "You have the following items: " << endl;
        for (const string& item : inventory) {
          cout << " - " << item << endl;
        }
      }
    }
  }

  return 0;
}
