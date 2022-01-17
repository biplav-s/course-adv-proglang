'''
Created on Jan 17, 2022

@author: biplavs
'''

# Read given filename and print its content
def readFile(file_name):
    
    count = 0
    file = open(file_name, 'r') 
    for line in file:
        count += 1
        print(f"Read Line{count}: {line}")
    file.close()
     
# Read given filename and write its content to second file
def readWriteFile(file_name, out_file_name):
    
    count = 0
    file = open(file_name, 'r') 
    out_file = open(out_file_name, 'w')
    for line in file:
        count += 1
        out_line = f"Read and will write - Line {count}: {line}"
        print(out_line)
        out_file.writelines(out_line)
        
    file.close()
    out_file.close()
 
  

if __name__ == "__main__":
    
    # MAIN BODY #
    print ("STATUS: Just reading")
    readFile("data/input.txt")
    
    print ("STATUS: Now reading and writing")
    readWriteFile("data/input.txt", "data/output.txt")
      
    

