#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> a = {1,2,3,4};
    a.push_back(10);
    a.push_front(20);
    a.pop_back();
    a.pop_front();
    cout << "The elements in the Linked List is: " << endl;
    for(auto it: a){
        cout << it << " ";
    }
    cout << endl;

    cout << "The front is : " << a.front() << endl;
    cout << "The back is : " << a.back() << endl;
    a.reverse();
    cout << "The elements in the Linked List after Reverse: " << endl;
    for(auto it: a){
        cout << it << " ";
    }
    cout << endl;
    cout << "The elements in the Linked List after Sorting: " << endl;
    a.sort();
    for(auto it: a){
        cout << it << " ";
    }
    cout << endl;

    list<int>::iterator iter = a.begin();
    iter++;
    cout << *iter;
    cout << endl;
    return 0;
}