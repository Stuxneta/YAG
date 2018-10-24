#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <fstream>

#include "headers/graphics.h"
#include "headers/main.h"
#include "headers/commands.h"

using namespace std;

string c;
string mess;

void inpu() {
  getline(cin, c);
}

void message() {
  cout << "Message > ";
  getline(cin, mess);
}

void slow() {
  if (c == "slow") {
      for( ; ; ) {
        cout << " " << mess << endl;
        sleep(1);
        cout << "  " << mess << endl;
        sleep(1);
        cout << "   " << mess << endl;
        sleep(1);
        cout << "    " << mess << endl;
        sleep(1);
        cout << "     " << mess << endl;
        sleep(1);
        cout << "      " << mess << endl;
        sleep(1);
        cout << "       " << mess << endl;
        sleep(1);
        cout << "      " << mess << endl;
        sleep(1);
        cout << "     " << mess << endl;
        sleep(1);
        cout << "    " << mess << endl;
        sleep(1);
        cout << "   " << mess << endl;
        sleep(1);
        cout << "  " << mess << endl;
        sleep(1);
      }
    } else {
      for(;;) {
        cout << " " << mess << endl;
        cout << "  " << mess << endl;
        cout << "   " << mess << endl;
        cout << "    " << mess << endl;
        cout << "     " << mess << endl;
        cout << "      " << mess << endl;
        cout << "       " << mess << endl;
        cout << "      " << mess << endl;
        cout << "     " << mess << endl;
        cout << "    " << mess << endl;
        cout << "   " << mess << endl;
        cout << "  " << mess << endl;
      }
  }
}