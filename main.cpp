#include <iostream>
#include <fstream>													// for file operating functions

using namespace std;

int main() {

	fstream file;
	//fstream file("sample.txt",ios::out); // we can do this as well using constructor

	file.open("sample.txt",ios::out |ios::ate);
	/*
	 * ios::in - INPUT - for reading
	 * ios::out - OUTPUT - Write to file. If there is no file CREATE IT, if there is a file then truncate (remove all content) unless it is with ios::in
	 * ios::tructate - TRUNCUTE - it is truncating
	 * ios::ate - At The End - sets pointer at the end of file, pointer location can be changed,
	 * ios:app - APPEND - the contents is added at the end, it is not possible to remove content by the append
	 * ios::binary - Opens files as binary file
	 */

	/*
	 * Default mode (flags) for FSTREAM
	 * fstream - ios::in | ios::out
	 * ifstream - ios::in
	 * ofstream - ios:out
	 *
	 */



	if (file.is_open())
	{
		//file << "Sample text\n";
		file << "aaaaaaaaaaaaaaaaaaaa\t";
		file << "sample text\n";
		file << "sample text1\n";

	} else
			cout << "Unable to open file";

	return 0;
}