#include<iostream>
using namespace std;
int main (){
int a = 10, b = 20;
int *ptr = &a;
b = *ptr + 1;
ptr = &b;   // adress inside ptr is being updated to adress of b.
cout << *ptr << " " << a << " " << b;
}
