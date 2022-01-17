'''
Created on Jan 17, 2022

@author: biplavs
'''

# Read calcs to be done
def readFile(file_name):
    
    file = open(file_name, 'r') 
    oper = file.readline().strip()
    first_num = file.readline().strip()
    second_num = file.readline().strip()
    file.close()
    
    return first_num, second_num, oper

# Write calc results
def writeFile(file_name, lines):
    
    file = open(file_name, 'w') 
    file.writelines(lines)
    file.close()

    
def doCalculation(f, s, operation):
    if (operation == 'add'):
        result = f + s # Does string based concatenation
        return result
    if (operation == 'subtract'):
        return f - s  # Gives an error as cannot convert to int
    

if __name__ == "__main__":
    
    # MAIN BODY #
    f, s, o = readFile("data/calc_input.txt")
    print (f"Result of parsing - {o}, on first num - {f},second - {s}")

    result = doCalculation(f, s, o)
    print (f"** Calculation result is: {result}")
        
    l1 = "Result of oper - " + o + "on first num - " + str(f) + ", second - " + str(s) + "\n"
    l2 = str(result)
    lines = [l1, l2]
    writeFile("data/calc_output.txt", lines)
    

