#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    cout << "The front is: "<<q.front() << endl;
    cout << "The back is: "<<q.back() << endl;
    cout << "The Queue is:" << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    cout << endl;
    return 0;
}