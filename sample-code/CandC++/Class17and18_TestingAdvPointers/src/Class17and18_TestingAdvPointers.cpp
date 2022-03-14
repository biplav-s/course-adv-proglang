//============================================================================
// Name        : Class17and18_TestingAdvPointers.cpp
// Author      : Biplav
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <chrono>
using namespace std;

 // Example from: https://en.cppreference.com/w/cpp/chrono
long fibonacci(unsigned int n)
{
	
    if (n < 2) 
    	return n;
    
    return fibonacci(n-1) + fibonacci(n-2);
}
 
int main()
{
	for (int n = 5; n<= 45; n=n+5) {
		cout << "Calculating fibonacci: start of n =  " << n << endl;
		auto  start = std::chrono::steady_clock::now();
		
		long result = fibonacci(n);
    	auto  end = std::chrono::steady_clock::now();
    
    	auto elapsed_time = end - start;
    	std::chrono::duration<double> diff_in_seconds = end - start;
    
    	cout << "f(" << n << ") = " << result << '\n';

    	cout << "elapsed time: " << elapsed_time.count() << " ticks\n";
    	cout << "elapsed time (in sec): " << diff_in_seconds.count() << "s\n";
    	
	}
}