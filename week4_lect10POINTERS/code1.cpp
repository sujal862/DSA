//writing correct swap function using pass by refrence.
 #include<iostream>
 using namespace std;
 void swap(int a, int b){
   int temp=a;
   a=b;
   b=temp;
   return;
 }
 int main(){
   int a,b;
   cout<<"enter a and b ";
   cin>>a>>b;
   int* p1=&a;
   int* p2=&b;
   swap(a,b);
   cout<<a<<" "<<b;
}
    