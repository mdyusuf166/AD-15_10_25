#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin >> n; 
    vector<int> v;
    for(int i = 0; i < n;){
        int value;
        cin >> value;
        v.push_back(value);
    }
    cout<<"print vector element"<<" ";
    for( int i= 0; i < n; i++){
        cout <<v[i]<<" ";
    }
    for( int i = 0 ; i < n; i++){
        int max;
        cin >> max;
        if( i == max ){
            cout<< "max : "<< i<< endl;
        }
    }
    for( int i = 0 ; i < n; i++){
        int min;
        cin >> min;
        if( i == min ){
            cout<< "min : "<< i<< endl;
        }
    }


    
    }