//============================================================================
// Name        : Class19To22_AdvTopics.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

// Demonstrate reading of file
void demoReadFile() {

	cout << "\n*** DEMO of reading of file ***\n\n";
	// https://www.cplusplus.com/doc/tutorial/files/

	string file_name = "data/input.txt";
	string line;

	ifstream myfile(file_name);
	if (myfile.is_open()) {

		while (getline(myfile, line)) {
			cout << line << '\n';
		}

		myfile.close();
		
		cout << "Successfully opened file - " << file_name << endl;
		
	} else
		cout << "Unable to open file - " << file_name << endl;
}


// Demonstrate buffered C-style reading of file
void demoBufferCReadFile() {

	cout << "\n*** DEMO of reading of file in a buffer in C style ***\n\n";
	// Credit: https://www.educative.io/edpresso/c-reading-data-from-a-file-using-fread

	
	char buffer[20]; // Buffer to store data
	FILE * stream;
	
	stream = fopen("data/input.txt", "r");
	int count = fread(&buffer, sizeof(char), 20, stream);
	fclose(stream);
	
	// Printing data to check validity
	printf("Successfully opened and read from file: \n%s \n", buffer);
	printf("Elements read: %d", count);
	
}

// Demonstrate buffered C++-style reading of file
void demoBufferCppReadFile() {

	cout << "\n*** DEMO of reading of file in a buffer in C++ style ***\n\n";
	// Credit: Adapted from https://www.learncpp.com/cpp-tutorial/input-with-istream/
	string in_file_name = "data/input.txt";
	string line;

	ifstream in_myfile(in_file_name);
	
	int  buf_size = 5;
	char buffer[buf_size]; // Buffer to store data
	
	while (in_myfile.read(buffer, buf_size)) {
		// Printing data to check validity
		cout << "Read from file next chunk of size - " << buf_size << endl;
		cout << buffer << endl;
		
		// Initialize buffer
		for(int i=0; i<buf_size; i++)
			buffer[i] = ' ';
	}
	in_myfile.read(buffer, buf_size);
	cout << buffer << endl;
	
	cout << "Successfully opened and read full file" << endl;

		
	
}



// Demonstrate reading and writing of file
void demoReadWriteFile() {

	cout << "\n*** DEMO of reading from and writing to file ***\n\n";
	// https://www.cplusplus.com/doc/tutorial/files/

	string in_file_name = "data/input.txt";
	string out_file_name = "data/output.txt";
	string line;

	ifstream in_myfile(in_file_name);
	ofstream out_myfile(out_file_name);
	if (in_myfile.is_open()) {
		if (out_myfile.is_open()) {
			while (getline(in_myfile, line)) {
				cout << "\t reading .. - " << line << endl;
				string out_line = "A prefix - " + line + '\n';
				cout << "\t\t writing .. - " << out_line;
				out_myfile << out_line;
			} // end-while

			// Close output file
			out_myfile.close();
		} else {
			cout << "Unable to open output file - " << out_file_name << endl;
		} // end-if

		// Close input file
		in_myfile.close();
	} else
		cout << "Unable to open input file - " << in_file_name << endl;

}



// --- Main ---

int main(int argc, char *argv[]) {

	char command = 0;
	string str = "";

	cout << "Classes 19 to 22 topics" << endl; // for advanced topics classes

	// First argument is program name
	cout << "Program name : " << argv[0] << endl;

	if (argc == 1) {
		printf("\nNo command passed. By default, reading a file.");
		command = '0';
	} else {
		// argc >= 2
		command = *argv[1];

		cout << "Command to run is - " << command << endl;
	}

	// Now execute based on command

	if (command == '0') {
		// Show unbuffered reading of files
		demoReadFile();
	} else if (command == '1') {
		// Show unbuffered reading and writing of files
		demoReadWriteFile();
	} else if (command == '2') {
		// Demo buffered reading of files
		demoBufferCReadFile();
	} else if (command == '3') {
		// Demo buffered reading of files in C++ style
		demoBufferCppReadFile();
	} else {
		// future option

	} 

	return 0;
}


