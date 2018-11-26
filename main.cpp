
#include <iostream>
#include <fstream>

using namespace std;

void usage() {
	cout << "Please, place usage here later" << endl;
}

int main(int argc, char **argv) {
	ifstream pfile;

	if ((argc < 2) || (argc > 3)) {
		cout << "wrong count of args!" << endl;
		usage();
		return 0;
	}
	
	if (std::string(argv[1]) == "-h") {
		usage();
		return 0;
	}
	
	if (std::string(argv[1]) == "-f") {
		pfile.open(argv[2]);

		if (pfile.is_open()) {

		} else {
			cout << "no file " << argv[2] << endl;
			return 0;
		}

		pfile.close();
	}

	
	return 0;
}