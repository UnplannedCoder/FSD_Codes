import pandas as pd
student ={
    "std_id" : [101,102,103,104,105,103],
    "name" : ["Pawan","Yash","Prakhar","Vishwas","Bhavya","Prakhar"],
    "age": [19,20,20,18,20,20]
}

# df = pd.DataFrame(student,index=["A","B","C","D","E","F"])
#print(df)

# student = [
#     [101,102,103,104,105,103],
#     ["Pawan","Yash","Prakhar","Vishwas","Bhavya","Prakhar"],
#     [19,20,20,18,20,20]
# ]
df=pd.DataFrame(student)#,index=["A","B","C","D","E","F"])
print(df)
# remove=df.drop_duplicates(keep="first").reset_index(drop=True)
df.iloc[5,0:3]=[106,"Ankit",21]
print(df)
# print(df.loc[0:1])