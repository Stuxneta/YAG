#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <fstream>

#include "headers/graphics.h"
#include "headers/main.h"
#include "headers/commands.h"

using namespace std;

void title() {
  string logo;
	ifstream titleart ("art/title.txt");
	if(titleart.is_open()) {
		while (getline(titleart, logo)) {
			cout << logo << '\n';
		}
		titleart.close();
	}
}