#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    
    int arr[] = {1,2,3,4,5,6,7};
    int *front = &arr[0];
    int *back = &arr[6];

    while(front <= back){
        int temp = *front;
        *front  = *back;
        *back = temp;
        front++;
        back--;
    }

    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }
    cout << endl;


    // start to (end - 1)
    reverse(&arr[0], (&arr[0] + 7));
    for(int i = 0; i < 7; i++){
        cout << arr[i] << " ";
    }

}