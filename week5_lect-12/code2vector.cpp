 #include<iostream>
 #include<vector>
 using namespace std;
 int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(0);
    
    for(int i=1;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    v.pop_back();
    for (int i = 1; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}   

 