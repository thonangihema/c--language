/*Python uses the # character to mark the beginning of a comment. The comment ends at 
the end of the line containing the # character. In this exercise, Create a function named 
removeComments that takes two file names(python source filename and output filename)
as input and removes all of the comments from the source file. Your logic should check 
each line in the file to determine if a # character is present. If it is then your program
should remove all of the characters from the # character to the end of the line, save the
modified line in the output file. If it is not then your program must save the line in the 
output file without any modification.
Write a main program to demonstrate your function. The names of the input and output
files are provided by the user.*/
#include <iostream>
#include <fstream>
using namespace std;

void removeComments(string in_name, string out_name) {
	ifstream fin(in_name);
	ofstream fout(out_name);
	string line;
	while(getline(fin, line)) {
		for(int i=0;i<line.length();i++)
		{
		if(line[i]!='#')
		{
		fout << line[i];
		}
		else 
		{
			break;
		}
		}
		fout<<"\n";
	}
	fin.close();
	fout.close();
}
int main() {
	string in_name, out_name;
	cin >> in_name;
	cin >> out_name;
	removeComments(in_name, out_name);
}