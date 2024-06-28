#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

// Best solution if duplicates occur twice: XOR USAGE
//                                        : ans = ans^arr[i]
//                                        : return ans;

int main(){
    vector<int> vect = {1,1,1,2,3,4,2,3};
    unordered_map<int, int> m;
    
    for(int i = 0; i < vect.size(); i++){
        if(m.find(vect[i]) == m.end()){
            m.insert(make_pair(vect[i],1));
        }
        else{
            m[vect[i]]++;
        }
    }

    unordered_map<int,int> :: iterator trav;
    for(trav = m.begin(); trav != m.end(); trav++){
        if(trav->second == 1){
            cout << "Unique element is: " << trav->first;
        }
    }
   
}