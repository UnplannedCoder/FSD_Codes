#include<iostream>
#include<string>
using namespace std;
class Person
{
private:
    std::string name;
    int age;
public:
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"Parameterized constructor"<<endl;
    }
    Person(Person &obj){
        name=obj.name;
        age=obj.age;
        cout<<"Copy constructor"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main()
{
    Person obj1("Ram", 28);
    Person obj2(obj1);
    obj1.display();
    obj2.display();
    return 0;
}