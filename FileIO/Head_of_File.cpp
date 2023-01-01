/*Unix-based operating systems usually include a tool named head which displays the first 
10 lines of a file whose name is provided as a command line parameter. Create a function 
named head that takes filename as input and returns the list of first 10 lines. 
Write a main program to demonstrate your function.*/
#include <iostream>
#include <fstream>
using namespace std;
void head(string in_name) {
	ifstream fin(in_name);
	string line;
    int l=1;
	while(getline(fin, line)&&(l<=10)) {
		cout<< line << "\n";
        l=l+1;
	}
	fin.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	head(in_name);
}