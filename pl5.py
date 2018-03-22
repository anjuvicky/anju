str = "Computers are useless. "  
  

dic = {}  
for char in str:  
   dic[char] = 0  
  

for char in str:  
  
   dic[char]+= 1  
  
  
for char, count in dic.items():  
   if count > 1 and char != ' ':  
      print "%c is repeated %d times" % (char, count)  
