import re

print ("Example 1 -- ")
# search a pattern
data = "This is AdvProg.pdf"
pattern = "[a-zA-Z_][a-zA-Z_0-9]*\\.[a-zA-Z0-9]+"

m = re.search(pattern, data)
print(m)
print("The pattern is at position:", m.start()) 


print ("Example 2 -- ")
# Find all occurence
m = re.findall(pattern, data)
print(m)


print ("Example 3 -- ")
data = "The CSCE 771 course is taught at University this Fall!"
pattern = "[tT]+\w"

m = re.findall(pattern, data)
print(m)
