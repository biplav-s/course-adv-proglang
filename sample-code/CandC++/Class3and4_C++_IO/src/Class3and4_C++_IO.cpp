//============================================================================
// Name        : Class3and4_C++_IO.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Print to show data types
void showDataTypes() {

	cout << "\n*** DEMO of data types ***\n\n";
	// Based on: https://www.tutorialspoint.com/cplusplus/cpp_data_types.htm

	cout << "Size of char : " << sizeof(char) << endl;
	cout << "Size of wchar_t : " << sizeof(wchar_t) << "\n" << endl;

	cout << "Size of int : " << sizeof(int) << endl;
	cout << "Size of short int : " << sizeof(short int) << endl;
	cout << "Size of long int : " << sizeof(long int) << "\n" << endl;

	cout << "Size of float : " << sizeof(float) << endl;
	cout << "Size of double : " << sizeof(double) << "\n" << endl;

}

// Demonstrate strings
void demoStrings(){
	
	cout << "\n*** DEMO of string data type ***\n\n";
	// Based on: https://www.tutorialspoint.com/cplusplus/cpp_strings.htm 
	
	   string tmp_str = "Hello World";
	   cout << "Length of - " << tmp_str << " - is: " << tmp_str.size() << endl;
	   for (int i=0; i<tmp_str.size(); i++) {
		   cout << "\t char at position " << (i+1) << " is - " << tmp_str[i] << endl; 
	   }
	   
	   string str_suffix = "<-> CSCE 240";
	   tmp_str += str_suffix;
	   cout << "\nAppended string - " << tmp_str <<  endl;
	   cout << "\t Length of appended string - " << tmp_str << " - is: " << tmp_str.size() << endl;
	   
	
}

// Demonstrate reading of file
void demoReadFile(){
	
	cout << "\n*** DEMO of reading of file ***\n\n";
	// https://www.cplusplus.com/doc/tutorial/files/
	
	string file_name = "data/input.txt";
	string line;
	
	ifstream myfile (file_name);
	if (myfile.is_open()) {
		
	    while ( getline (myfile, line) ) {
	      cout << line << '\n';
	    }
	    
	    myfile.close();
	} else 
		cout << "Unable to open file - " << file_name << endl;    
	
}

// Demonstrate reading and writing of file
void demoReadWriteFile(){
	
	cout << "\n*** DEMO of reading from and writing to file ***\n\n";
	// https://www.cplusplus.com/doc/tutorial/files/
	
	string in_file_name = "data/input.txt";
	string out_file_name = "data/output.txt";
	string line;
	
	ifstream in_myfile (in_file_name);
	ofstream out_myfile (out_file_name);
	if (in_myfile.is_open()) {
		if (out_myfile.is_open()) {
			while ( getline (in_myfile, line) ) {
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


// Main

int main(int argc, char* argv[]) {
	
	char command = 0;
	string str = "";
	
	// First argument is program name
	cout << "Program name : " << argv[0] << endl;
	
	if(argc == 1) {
		printf("\nNo command passed. By default, will be printing data types.");
	} else  {
	    // argc >= 2
	    command = *argv[1];
	    
	    cout << "Command to run is - " << command << endl;
	}
	    
	// Now execute based on command

	if(command == '0') {    
		// Show data types
		showDataTypes();
	} else if(command == '1') {
		// Demo strings
		demoStrings();
	} else if(command == '2') {
		// Demo reading of file
		demoReadFile();
	} else if(command == '3') {
		// Demo reading of file
		demoReadWriteFile();
	}
	
	return 0;
}

