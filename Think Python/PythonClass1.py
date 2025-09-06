print("hello world")

'''
 different data types in python
'''
a = 34  # datatype - int
b = 34.55  # datatype - float
c = True  # datatype - boolean
d = "d"  # datatype - char
e = "hello"  # datatype - string (not a primitive data type of python)

print(a)
print(b)
print(c)
print(d)
print(e)

'''
fstring --(formatted string literal) -- used to embed python expressions directly inside string literals
'''

age = 20
name = "yash"
print(f"Hi my name is {name} and I am {age} years old")


'''
 mutable and immuatable data in python 
'''

# list , sets and dictionaries are example of mutable data type in python
list1 = [1,2,3,4]
print(id(list1)) #id() function prints the memory location where the variable is stored
list1.append(5) # now 5 is added to the list 
print(id(list1))
# since the id before and after making changes in list is same , so list is a mutable data type

set1 = {1,3,4,5,6}
print(id(set1))
set1.add(2) # 2 is added to set1
print(id(set1))
# since the id before and after making changes in set is same , so set is also a mutable data type

#similarly , dictionaries
student = {'name' : 'yash', 'age' : 20 , 'course' : 'B.tect'}
print(id(student))
student['age'] = 19 #value for age is updated 
print(id(student))

'''
immuatable data types are - int , float , string , tuple
'''

a = 22 # a is an integer
print(id(a))
a = a+1
print(id(a))
# different ids before and after changing value of a implies that this data type is immuatable

b = 34.32 # b is an float
print(id(b))
b = b-1
print(id(b))
# different ids before and after changing value of b implies that this data type is immuatable

c = "Yash" #c is an string
print(id(c))
c = c.upper() # for uppercase 
print(id(c))
# different ids before and after changing value of c implies that this data type is immuatable

#operators 

'''
arithmatic operators - add, sub, divide, multiply, floor divide, modulo
'''

a = 3
b = 4
print(a+b)
print(a-b)
print(a*b)
print(a/b)

# floor division : "//" it gives the quotient's integer(or the greatest integer less than or equal to the quotient) part only
print(3//4) # output = 0
print(3//-4) # output = -1
print(-3//4) #output = -1
print(4//3) #output = 1
print(2//3) # output = 0
print(7//2) #output = 3
print(-7//2) #output = -4

# % modulo operator -- gives the remainder

print(3%4) # output =3
print(3%-4) #output = -1
print(-3%4) #output = 1
print(-4%3) #output = 2
print(4%3) # output = 1
print(2%3) # output = 2
print(7%2) # output = 1
print(-7%2)# output = 1
#sign of divisor will be the sign of the answer

''' 
logical operators - and , or & not
'''
print(True and True)  # output True   
print(False and False)  # output False
print(False and True) # output False
print(False or False) # output False
print(False or True) # output True
print(True or True) # output True

print(not True) # output = False
print(not False) # output = True

'''
Relational operator (> , < , >= , <= , == , !=)
'''

print(2>3)  #output = False
print(2==2)  #output = True
print(2>1) #output = True
print(2!=3) #output = True
print(2>=3) #output = False
print(2==2) #output = True
print(2<=1) #output = False
