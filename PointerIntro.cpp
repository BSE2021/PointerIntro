// PointerIntro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int* addingToArray(int b[], int n) {
    for (int i = 0; i < n; i++) {
        b[i] += 5;
    }
    return (b);
}


int main()
{   
    //Task1
    cout << "\nTask1\n";
    cout << "-----\n\n";
    int age = 19;
    int* ptr;

    ptr = &age;
    cout << "\n(Using variable name)The age is " << age << endl;
    cout << "\n(Using pointer)The age is " << *ptr << endl;
    cout << "\nThe memory address of age is " << ptr << endl;

    int age1 = 10, age2 = 24;
    int* ptrage1;
    int* ptrage2;

    // Task 2
    cout << "\n\n\nTask2 \n";
    cout << "-----\n\n";
    ptrage1 = &age1;
    ptrage2 = &age2;
    cout << "\nThe average of ages is: " << (*ptrage1 + *ptrage2) / 2 << endl;

    //Task 3 - arrays
    cout << "\n\n\nTask3-arrays\n";
    cout << "------------\n\n";
    int a[5] = { 10,20,30,40,50 };
    int* ptra;

    //ptra = a; //store array name in the pointer, it refers to the first element in the array
    ptra = addingToArray(a, 5); //passing an array and storing the memory address in the pointer

    cout << "The array values"<<endl;
   // access the array using pointer
    for (int i = 0; i < 5; i++) {
      //  cout << a[i]; //using array variable and index 
        cout << *(ptra +i)<< endl;
        cout << "memory address of element " << i << " is " << ptra + i << endl;
    }
    //cout << "\nThe third element in the array: " << *(ptra + 2);



}