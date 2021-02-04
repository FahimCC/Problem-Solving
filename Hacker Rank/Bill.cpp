#include <iostream>
 
using namespace std;
 
int main() {
    
    cout<<"Golden Duck"<<endl;
    int test,x;
    cin >> test;
    
    while(test--){
        cin >> x;
        if(x & 1){
            cout << "1" <<endl;
        }
        else{
            cout << "0" <<endl;
        }
    }
 
    return 0;
}