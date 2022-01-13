'''
Created on Jan 12, 2022

@author: biplavs
'''

# Credit: https://www.geeksforgeeks.org/bubble-sort/
def bubbleSort(arr):
    n = len(arr)

    # Traverse through all array elements
    for i in range(n):

        # Last i elements are already in place
        for j in range(0, n-i-1):

            # traverse the array from 0 to n-i-1
            # Swap if the element found is greater
            # than the next element
            if arr[j] > arr[j+1] :
                arr[j], arr[j+1] = arr[j+1], arr[j]
                
    return arr


# Reference: https://www.geeksforgeeks.org/command-line-arguments-in-python/
import sys

# argv has the arguments passed as a list. Get total arguments
n = len(sys.argv)
print("Total arguments passed:", n)
 
# Arguments passed
#print("\nName of program:", sys.argv[0])
 
numbers = []
print("\nArguments passed:")
for i in range(1, n):
    print(f"\n \t location = {i}: {sys.argv[i]}")
    
    # Update s
    numbers.append(sys.argv[i])
    
    
# Sort numbers
sorted_numbers = bubbleSort(numbers)

# Print final result
print ("Sorted Numbers: ")
print (sorted_numbers)

