#include <iostream>

using namespace std;

class Person
{
public:
    string firstName = "Alice";
    string lastName = "Ames";
};

class Animal
{
public:
    virtual void eat() 
    { 
        cout << "Eating something" << endl;
    }
};

class Dog : public Animal
{
public:
    void eat() { cout << "Eating dog food" << endl; }
};

class Cat : public Animal
{
public:
    void eat() { cout << "Eating cat food" << endl; }
};

void callEatFunction(Animal* a)
{
    a->eat();
}


int main()
{

    Animal* a = new Animal;  //Java MUST use new 
    Dog* d = new Dog;
    Cat* c = new Cat; 


    callEatFunction(a); 
    callEatFunction(d);
    callEatFunction(c);
    //a->eat();  
    //d->eat(); 
    //c->eat(); 

    delete a;
    delete d; 
    delete c; 

    //int a = 5; 
    //int* pointerToA = &a; 

    ////cout << *pointerToA << endl; 

    //Person her; 

    //Person* pointerToHer = &her; 

    //cout << her.firstName << "\t" << her.lastName << endl; 

    //cout << (*pointerToHer).firstName << endl; 
    //cout << pointerToHer->firstName << "\t" << pointerToHer->lastName << endl;
 
    return 0;
}