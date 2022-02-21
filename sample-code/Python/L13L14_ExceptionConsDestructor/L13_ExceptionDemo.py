'''
Created on Feb 20, 2022

@author: biplavs
'''

def demoWithoutException (data, index):
    print ("STATUS: Printing without any precaution");
    print ("Character at index = ", index, ", value  = ", data[index], "\n")

    
def demoWithException (data, index):
    print ("STATUS: Printing with try/ catch")
        
    try:
        print ("Character at index = ", index, ", value  = '", data[index], "\n")
        
    except IndexError:
        print ("ERROR: Out of index error")
        
    except AttributeError as error:
        print ("ERROR: Caught exception. \n")
        print (error)

    
data = "Tom";
offset = 2;
        
print ("Data is - '" + data);
        
        
demoWithoutException(data, offset)
demoWithException(data, len(data) + offset)

