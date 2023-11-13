#include <iostream>

#include<vector>

using namespace std;

class A
{
    int x, y; 

public: 
    A(int _x, int _y)
    {
        cout << "Constructing object (AKA: allocating memory for object of A" << endl;
        x = _x; 
        y = _y; 
    }

    /// <summary>
    /// A DE-structor!
    /// </summary>
    ~A()
    {
        cout << "Deallocating memory (AKA: destroying) object of type `A`!" << endl; 
    }

};

void createObjectOfA()
{
    //A staticAObject{ 1, 2 }; //how long does this object "live"?

                            //AKA: how long does the object have memory allocated to it? 
    
    A* dynamicAObject = new A{ 3, 4 };

    //memory leak?

    delete dynamicAObject; 
}


class List
{
public:
    int* ptr;
    int length; //the number of elements (integers) in the list 

    //Constructor def:
    List(int listLength)
    {
        length = listLength;
        ptr = new int[length];
    }

    void insertElement(int index, int value)
    {
        ptr[index] = value;
    }

    void print()
    {
        for (int i = 0; i < length; i++)
        {
            cout << ptr[i] << endl; 
        }
    }

    List(const List& otherList)
    {
        this->length = otherList.length; 

        //ptr = otherList.ptr; //This leads to deallocating twice!
        ptr = new int[length];

        for (int i = 0; i < length; i++)
        {
            ptr[i] = otherList.ptr[i]; 
        }
    }

    ~List()
    {

        delete[] ptr;
        cout << "List object destroyed" << endl;
    }

}; //end `List` class def


int main()
{
    List l1{ 5 }; 

    l1.insertElement(0, 42); 
    l1.insertElement(1, -42);
    l1.insertElement(2, 412);
    l1.insertElement(3, 2);
    l1.insertElement(4, 4);

    //l1.print(); 
    //List l3{}
    List l2{ l1 };
    l2.print(); 
    //int* pointer = new int; 
    //delete pointer; 
    //delete pointer; 

    int a = 5; 
    int shallowCopyOfA = a; 

    int& DEEPcopyOfA = a;

 /*   cout << "BEFORE" << endl; 
    createObjectOfA(); 
    cout << "AFTER" << endl;*/


    return 0;
}