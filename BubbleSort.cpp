#include "BubbleSort.h"
using namespace std;
vector<int> BubbleSort::sort(vector<int> list){
    int n = list.size();
    bool swap=true;
    while (swap){
        swap=false;
        for (int i=1;i<n;i++){
            if (list.at(i-1)>list.at(i)){
                int t=list.at(i-1);
                list.at(i-1)=list.at(i);
                list.at(i)=t;
                swap=true;
            }
        }
    }
    return list;
}
