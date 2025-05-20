#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
string name;
int age;
string gender;

};
void print(Person person)
{
cout << person.name << " is "<< person.age << " years old "<< "gender " << person.gender << endl;
}

int main()
{
Person person;
Person person1;
Person person2;
person.name = "Harry";
person.age = 23;
person.gender = "Male";
cout << "Meet " << person.name<<endl ;
print(person);
person1.name = "Anna";
person1.age = 30;
person1.gender = "Female";
cout << "Meet " << person1.name << endl;
print(person1);
person2.name = "John";
person2.age = 27;
person2.gender = "Male";
cout << "Meet " << person2.name << endl;
print(person2);
return 0;
}
