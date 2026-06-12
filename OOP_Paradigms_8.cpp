#include <iostream>
using namespace std;

class Animal
{
private:
    int age = 5;

public:
    int getAge()
    {
        return age;
    }

    void sound()
    {
        cout << "Dog Barks"<<endl;
    }
};

class Dog : public Animal
{
};

int main()
{
    Dog dobj;

    cout << "Age = " << dobj.getAge() << endl;
    dobj.sound();

    return 0;
}