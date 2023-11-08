#include <iostream>
#include <vector>

using namespace std;

class Node
{
    int data; 
    Node* link; 
};


std::vector<int> returnOneThrough5()
{
    vector<int> numsList = { 1, 2, 3, 4, 5 };

    return numsList; 
}


int* returnPointerDemo(int numberOfElements) //function call operator ()
{
    int* somePointer = new int [numberOfElements]; //allocates space for ten integers 
                                        //and stores the address of the first int
                                           //in "somePointer"

    for (int i = 0; i < numberOfElements; i++)
    {
        somePointer[i] = i * 2; 
        //*somePointer = i * 2; 
        //somePointer++; //steps 4 Bytes forward in memory to the next location           
                        //at which an int is stored

    }

    return somePointer; 

    //return 1; 
} //end func (funk) definition

int main()
{

    cout << "How many elements do you want in your DYNAMIC!! array?" << endl; 
    int numberOfElements; 

    cin >> numberOfElements; 


    //auto i = 'f';
    auto result = returnPointerDemo(numberOfElements); 
    //auto result = returnOneThrough5(); 
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << result[i] << endl; 
    }

    //for (auto& num : result)
    //{
    //    cout << num << endl; 
    //}

    return 0;
}