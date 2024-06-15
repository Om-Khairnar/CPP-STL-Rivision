#include<iostream>
#include<array> // for swap() and array
using namespace std;
int main()
{
 
    // Initializing 1st array
    array<int,6> ar = {1, 2, 3, 4, 5, 6};
 
    // Initializing 2nd array
    array<int,6> ar1 = {7, 8, 9, 10, 11, 12};
 
    // Printing 1st and 2nd array before swapping
    cout << "The first array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements before swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;
 
    // Swapping ar1 values with ar
    ar.swap(ar1);
 
    // Printing 1st and 2nd array after swapping
    cout << "The first array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar[i] << " ";
    cout << endl;
    cout << "The second array elements after swapping are : ";
    for (int i=0; i<6; i++)
    cout << ar1[i] << " ";
    cout << endl;

    
     // Declaring 1st array
    array<int,6> br;
 
    // Declaring 2nd array
    array<int,0> br1;
    // Checking size of array if it is empty
    br1.empty()? cout << "Array empty":
        cout << "Array not empty";
    cout << endl;
 
    // Filling array with 0
    br.fill(0);
 
    // Displaying array after filling
    cout << "Array after filling operation is : ";
    for ( int i=0; i<6; i++)
        cout << br[i] << " ";
 
    return 0;
 
}