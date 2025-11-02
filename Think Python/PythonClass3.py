data={"name":"John", "age":30, "city":"New York", 10.3: "float", True: 1}
print(data)
# data["name"]="Alice"   #updating value of key "name"
# print(data)

# print(type(data))
# print(data["name"])
# print(data.get("age"))
# for i in data:
#     print(i, ":", data[i])

# data["Gender"]=["Male","Female"]   # adding new key value pair
# print(data)
# print(data.pop(10.3))   # it will remove the key value pair with key 10.3
# print(data.popitem())   # it will remove the last inserted key value pair
# print(data)
# del data["age"]
# print(data)

# data.clear()   # it will empty the dictionary
# print(data)
print(len(data))   # it will give the length of dictionary

# data1 = data.copy()   # it will create a shallow copy of the dictionary
# print(data1)

# data2 = dict(name="Alice", Marks = 85)   # another way to create a dictionary
# print(data2)

# data3 = dict([("name","Bob"), ("age",25)])   # another way to create a dictionary
# print(data3)

data4 = {"Pawan",1,2,3,4,5}   # another way to create a dictionary
# print(data4)
# print(id(data4))
# data5=data4.copy()
# print(data5)
# print(id(data5))
# data4.remove(4)  #removes element from set. if we want to remove element that is not present in set it return the error
# print(data4)
data4.discard(6)  #removes element from set. if we want to remove element that is not present in set it does not return the error 
print(data4)