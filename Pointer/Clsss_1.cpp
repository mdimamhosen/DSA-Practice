#include<bits/stdc++.h>
using namespace std;

int main (){

int num = 5;
int *ptr = &num;

cout << "Value of num is: " << num << endl;
cout<< "Value of num using pointer is: " << *ptr << endl;
cout<< "Address of num is: " << &num << endl;
cout<< "Address of num using pointer is: " << ptr << endl;

cout << "size of num is: " << sizeof(num) << endl;
cout << "size of ptr is: " << sizeof(ptr) << endl;

char  ch  = 'A';
char *ptr1 = &ch;
cout << "Size of ptr1 is: " << sizeof(ptr1) << endl;

}
