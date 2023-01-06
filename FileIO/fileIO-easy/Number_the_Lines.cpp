/*Create a function named numberLines that takes two filenames(first one for input, second 
one for output) as input and reads the lines from input file, adds line numbers to each line 
before writing it to an output file. Each line in the output file should begin with the line 
number, followed by a colon and a space, followed by the line from the input file.
Write a main program to demonstrate your function. The names of the input and output
files are provided by the user.
*/
#include <iostream>
#include <fstream>
using namespace std;
void numberLines(string in_name, string out_name) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	int  *myptr1 = NULL;
	string line;
    int i=1;
	while(getline(fin, line)) {
		fout << i<<": "<<line << "\n";
        i=i+1;
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	numberLines(in_name, out_name);
}