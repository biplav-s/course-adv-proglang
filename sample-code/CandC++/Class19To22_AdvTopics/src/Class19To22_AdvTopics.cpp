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

#include "Point.h"
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

// Demonstrate buffer operations
void exploreBufferedStreams() {

	cout << "\n*** DEMO of buffers ***\n\n";

	string out_file_name = "data/output.txt";

	ofstream os(out_file_name);
	
	if (!os.is_open()) {
		cout << "Unable to open output file - " << out_file_name << endl;
	}
	
	// Situation at start
	cout << "Info: position of put pointer - " << os.tellp() << endl;

	// Insert a character
	cout << "Info: inserting 'a' ";
	os.put('a');
	// Check the position
	cout << "Info: position of put pointer - " << os.tellp() << endl;
	
	// Insert a 5-length string
	cout << "Info: inserting 'Hello' ";
	os.put('Hello');
	// Check the position
	cout << "Info: position of put pointer - " << os.tellp() << endl;
	
	// Moving by 3 positions 
	// cout << "Info: moving put by 3 using 'seek' ";	
	os.seekp(3, ios::cur);
	cout << "Info: position of put pointer - " << os.tellp() << endl;

	// Moving by -3 positions 
	// cout << "Info: moving put by 3 using 'seek' ";	
	os.seekp(-3, ios::cur);
	cout << "Info: position of put pointer - " << os.tellp() << endl;
	
	// Close output file
	os.close();

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


// Demonstrate reading and writing of file with buffers
void demoReadWriteBuffersFile() {

	cout << "\n*** DEMO of reading from and writing to file using buffers ***\n\n";
	// https://www.cplusplus.com/reference/ostream/ostream/write/
	
	string in_file_name = "data/input.txt";
	string out_file_name = "data/output.txt";
	string line;

	ifstream in_myfile(in_file_name);
	ofstream out_myfile(out_file_name);
	
	// get size of file
	in_myfile.seekg (0,in_myfile.end);
	long size = in_myfile.tellg();
	cout << "Info: size of input file - " << size << endl;

	
	// Now move to the beginning to start reading
	in_myfile.seekg (0);

	// allocate memory for file content
	char* buffer = new char[size];
	  
	// read content of infile
	in_myfile.read (buffer,size);

	// write to outfile
	out_myfile.write (buffer,size);

	// release dynamically-allocated memory
	delete[] buffer;

	// Close files and flush content
	out_myfile.close();
	in_myfile.close();
	  
}

// Demonstrate operator overloading
void demoOperatorOverloading() {

	cout << "\n*** DEMO of operator overloading ***\n\n";
	// Credit: Adapted from e.g. on page 131: C++ Essentials, Sharam Hekmat

	
	Point p1(10,20), p2(10,20);
	Point p3 = p1 + p2;
	Point p4 = p1 - p2; 
	
	cout << "Point p3 value - " << endl;
	p3.print();
	cout << "Point p4 value - " << endl;
	p4.print();
		
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
	} else if (command == '4') {
		// Demo stream/buffer operations 
		exploreBufferedStreams();
	} else if (command == '5') {
		// Demo stream/buffer operations 
		demoReadWriteFile();
	} else if (command == '6') {
		// Demo stream/buffer operations 
		demoReadWriteBuffersFile();
	} else {
		// future option
		demoOperatorOverloading();
	} 

	return 0;
}


