#  Pointer

"Target of" and "Pointer" are both presented by *

If * comes after a type, it means "type pointer"
int* ptr; // integer pointer ptr
double* dptr; // double pointer dptr
struct Employee* eptr; // Employee pointer eotr

if * comes in front  of a variable as a unary operator, it means "Target of"
a = *p; // a is set to target of p; (p is a pointer, a is a variable)
*t = x; // target of t is set to x
A = B * *C; // A is set to B multiply by target of C
            // A and B are variables but C is a pointer

#  Array
When we create an array with 5 elements, it creates 6 integer which are 5 elements and 1 pointer of type const (variable type)
array is a pointer that points to a chuck of stuff in our memory.

Example:
int ar[5];
ar[0], ar[1], ar[2], ar[3], ar[4], const int* ar

#  Dynamic memory allocation
in c and cpp is not capable to know what is the size of the array. In main we can find out what is the size of the array but int the function we don't. The size of array is done in compile time which is no user >> How can we know the size of the array without user' telling??? answer: using DMA to postpone the size of array to run time.
Note:
compile time is when programmer writing their code
run time is when user execute our program
heap is an area of pre-reserved computer main storage ( memory ) that a program process can use to store data in some variable amount that won't be known until the program is running.
Syntax:
    int cnt{};
    //int* nums = nullptr;
    int* nums{};
    
    cout << "Reverser!" << endl;
    cout << "Enter the number of integers: ";
    cin >> cnt;
    //new what type, how many
    nums = new int[cnt];
    
    //to make sure that you won't have a memory leak
    delete[] nums;
