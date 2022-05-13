#include "QuickSort.h"
#include "BubbleSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(){
    vector<int> list;
    while (!cin.eof()) {
        string temp;
        cin >> temp;
        if (temp == "")
            break;
        list.push_back(stoi(temp));
    }
    QuickSort quick;
    vector<int> sortedList = quick.sort(list);
    for(int i=0;i<list.size();i++)
        cout<<sortedList.at(i)<<" ";
    cout<<endl;
    RecursiveBinarySearch search;
    cout<<search.search(sortedList,3)<<endl;
    return 0;
}
