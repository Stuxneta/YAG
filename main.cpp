#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
#include <fstream>

using namespace std;

int main() {
	string line;
	ifstream titleart ("title.txt");
	if(titleart.is_open()) {
		while (getline(titleart, line)) {
			cout << line << '\n';
		}
		titleart.close();
	}

	string mystr;
	string c;

	cout << "\nType 'slow' for it to print slowly\nType nothing to fast print > ";
	getline (cin, c);
	cout << "\nMessage  > ";
	getline (cin, mystr);

	if (c == "slow") {
		for( ; ; ) {
			cout << " " << mystr << endl;
			sleep(1);
			cout << "  " << mystr << endl;
			sleep(1);
			cout << "   " << mystr << endl;
			sleep(1);
			cout << "    " << mystr << endl;
			sleep(1);
			cout << "     " << mystr << endl;
			sleep(1);
			cout << "      " << mystr << endl;
			sleep(1);
			cout << "       " << mystr << endl;
			sleep(1);
			cout << "      " << mystr << endl;
			sleep(1);
			cout << "     " << mystr << endl;
			sleep(1);
			cout << "    " << mystr << endl;
			sleep(1);
			cout << "   " << mystr << endl;
			sleep(1);
			cout << "  " << mystr << endl;
			sleep(1);
			//cout << " " << mystr << endl;
		}
	} else if(c == "Was this made on linux") {
		for( ; ;) {
			cout << " " << "yes" << endl;
			//sleep(1);
			cout << "  " << "yes" << endl;
			//sleep(1);
			cout << "   " << "yes" << endl;
			//sleep(1);
			cout << "    " << "yes" << endl;
			//sleep(1);
			cout << "     " << "yes" << endl;
			//sleep(1);
			cout << "      " << "yes" << endl;
			//sleep(1);
			cout << "       " << "yes" << endl;
			//sleep(1);
			cout << "      " << "yes" << endl;
			//sleep(1);
			cout << "     " << "yes" << endl;
			//sleep(1);
			cout << "    " << "yes" << endl;
			//sleep(1);
			cout << "   " << "yes" << endl;
			//sleep(1);
			cout << "  " << "yes" << endl;
			//sleep(1);
			//cout << " " << "yes" << endl;
		}
	} else if(c == "repeat") {
		for( ; ; ) {
			cout << mystr;
		}
	} else {
		for( ; ; ) {
		cout << " " << mystr << endl;
		//sleep(1);
		cout << "  " << mystr << endl;
		//sleep(1);
		cout << "   " << mystr << endl;
		//sleep(1);
		cout << "    " << mystr << endl;
		//sleep(1);
		cout << "     " << mystr << endl;
		//sleep(1);
		cout << "      " << mystr << endl;
		//sleep(1);
		cout << "       " << mystr << endl;
		//sleep(1);
		cout << "      " << mystr << endl;
		//sleep(1);
		cout << "     " << mystr << endl;
		//sleep(1);
		cout << "    " << mystr << endl;
		//sleep(1);
		cout << "   " << mystr << endl;
		//sleep(1);
		cout << "  " << mystr << endl;
		//sleep(1);
		//cout << " " << mystr << endl;
		}
	}
	return 0;
}