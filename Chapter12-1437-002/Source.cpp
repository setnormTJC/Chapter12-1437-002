#include <iostream>

#include<vector>

using namespace std;

void demoPassByReference(int& a)
{
    cout << a << endl; 
}


class Node
{
    int dataOfInterest; 
    Node* link; 

};

int main()
{

    vector < vector<int>> dynamicMatrix;

    vector<int> row1;
    row1.push_back(1);
    row1.push_back(2);

    vector<int> row2;
    row2.push_back(3);
    row2.push_back(4);
    row2.push_back(5);

    dynamicMatrix.push_back(row1);

    dynamicMatrix.push_back(row2);

    for (int i = 0; i < dynamicMatrix.size(); i++)
    {
        for (int j = 0; j < dynamicMatrix[i].size(); j++)
        {
            cout << dynamicMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    //while (true)
    //{
    //    int* pointerToAnInt = new int;  //BAD!

    //    // ... do some useful stuff with that allocated memory ...

    //    delete pointerToAnInt; 
    //}
    //cout << "Enter number of grades you want to enter: " << endl; 
    //int numberOfGrades; 

    //cin >> numberOfGrades; 

    ////int staticArray[10];

    //int* gradesArray = new int [numberOfGrades]; //pre-C++ 11 (2011)

    //std::vector<int> grades; 

    //for (int i = 0; i < numberOfGrades; i++)
    //{
    //    //*gradesArray = i * i; 
    //    cout << "Enter grade " << i << endl; 
    //    int currentGrade; 
    //    cin >> currentGrade; 

    //    grades.push_back(currentGrade); 
    //    //cin >> gradesArray[i]; 
    //    //gradesArray++; 
    //}

    //cout << "Grades are: " << endl; 
    //for (auto& grade: grades)
    //{
    //    cout << grade << endl; 
    //    //cout << *gradesArray << endl;
    //    //gradesArray++; 
    //}

    //int a = 51; 


    ////cout << &a << endl; 

    ////int* pointerToA = &a; 
    ////cout << pointerToA << endl;

    ////pointerToA = pointerToA + 1; 

    ////cout << pointerToA << endl; 

    ////cout << a * a << endl; 

    ////if (a > 0 & a < 100)
    ////cout << a << endl; 

    ////cout << *pointerToA << endl; //* acts as the DEREFERENCING operator here 


    ////pointerToA = 23456; 

    //cout << a << endl; 
    return 0;
}