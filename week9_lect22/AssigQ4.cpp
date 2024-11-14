#include<iostream>
#include<string>
using namespace std;
int main() {
string arr[] = {"physicswallah","quiz","practice",
"pwskills","coding" };
int n = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - 1 - i; j++) {
if (arr[j].compare(arr[j+1]) > 0) {
swap(arr[j],arr[j+1]);
}
}
}
for (int i = 0; i < n; i++) {
cout<<arr[i]<<endl;
}
return 0;
}
