#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void swapAlternatives(vector<int> &v){
    for(int i = 0; i < v.size(); i += 2){
        if(i + 1 < v.size()){
            swap(v[i], v[i+1]);
        }
    }
}

int main(){
    vector<int> vect = {1,2,3,4,5,6};
    vector<int> vect1 = {1,2,3,4,5};

    for(int &ele: vect){
        cout << ele << " ";
    }
    cout << endl;

    for(int &ele: vect1){
        cout << ele << " ";
    }
    cout << endl;

    swapAlternatives(vect);
    swapAlternatives(vect1);

    for(int &ele: vect){
        cout << ele << " ";
    }
    cout << endl;

    for(int &ele: vect1){
        cout << ele << " ";
    }
    cout << endl;

}