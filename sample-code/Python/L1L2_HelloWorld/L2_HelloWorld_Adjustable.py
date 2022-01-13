'''
Created on Jan 12, 2022

@author: biplavs
'''

"The program will read arguments and append it to a pre-determined string"

# Writing out a string
s = "Hello World in Python"
print (s)

# Reference: https://www.geeksforgeeks.org/command-line-arguments-in-python/
import sys

# argv has the arguments passed as a list. Get total arguments
n = len(sys.argv)
print("Total arguments passed:", n)
 
# Arguments passed
print("\nName of program:", sys.argv[0])
 
print("\nArguments passed:")
for i in range(1, n):
    print(f"\n \t location = {i}: {sys.argv[i]}")
    
    # Update s
    s += " " + sys.argv[i]
    
# Print final string
print (s)
    
