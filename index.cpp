#include <iostream>
#include <string>

using namespace std;

int main() {
  string location = "room";
  string action;

  while (true) {
    cout << "You are in a " << location << "." << endl;
    cout << "What do you want to do? ";
    cin >> action;

    if (location == "room") {
      if (action == "go north") {
        location = "hallway";
      } else if (action == "look around") {
        cout << "You see a door to the north and a bed in the corner." << endl;
      } else {
        cout << "I don't understand that action." << endl;
      }
    } else if (location == "hallway") {
      if (action == "go south") {
        location = "room";
      } else if (action == "look around") {
        cout << "You see a long hallway with doors on either side." << endl;
      } else {
        cout << "I don't understand that action." << endl;
      }
    }
  }

  return 0;
}
