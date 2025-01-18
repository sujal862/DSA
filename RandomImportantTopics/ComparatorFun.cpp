#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//goal = first got sorted in asc order and if first is equal sor second in desc order

//custom comp = if wants to swap return false and if not return true
// bool should_i_swap(pair<int, int> a, pair<int, int> b){
//     if(a.first != b.first) {
//         if(a.first > b.first) return false;
//         return true;
//     } else { 
//         if(a.second < b.second) return false;
//         return true;
//     }
// }

// or asan tarika likhna ka = jo chij chiya jis order mai usi order ma return mai likh do 
// It returns true if the first argument should come before the second.
// It returns false otherwise.
bool should_i_swap(pair<int, int> a, pair<int, int> b){
    if(a.first != b.first) {
        return a.first < b.first;   // a pick ho jayga agr ya true hua else agr false hua ya condition to b pick hojayga (pick ho jayga mtlb wo pahla aa jayga)
    } else { 
        return a.second > b.second;
    }
}

// bool should_i_swap(pair<int, int> a, pair<int, int> b){
//     if(a.first != b.first) {
//         if(a.first > b.first) return true;
//         return false;
//     } else { 
//         if(a.second < b.second) return true;
//          return false;
//     }
// }

int main(){
    int n;
    cin>>n;
    vector<pair<int,int> > a(n);
    for(int i = 0; i < n; ++i){
        cin >> a[i].first >> a[i].second;
    }
    sort(a.begin(), a.end(), should_i_swap); // 3rd parameter = custom comparator function(contains logic of sorting)
    // for(int i = 0; i < n; ++i){
    //     for(int j = i + 1; j<n; ++j){
    //         if(should_i_swap(a[i], a[j])){
    //             swap(a[i], a[j]);
    //         }
    //     }
    // }
    for(int i = 0; i<n; ++i) {
        cout<< a[i].first << " " << a[i].second;
    }
    cout<< endl;
}