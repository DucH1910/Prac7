#include "QuickSort.h"
using namespace std;
int QuickSort::getPivotIndex(vector<int> list, int low, int high){
    int pivotPosition = high;
    if (high-low>3)
        pivotPosition=low+2;
    int t= list.at(pivotPosition);
    list.at(pivotPosition)=list.at(high);
    list.at(high)=t;
    int pivot = list.at(high);
    int i = low-1;
    for (int j=low;j<high;j++){
        if (list.at(j)<=pivot){
            i++;
            int t=list.at(i);
            list.at(i)=list.at(j);
            list.at(j)=t;
        }
    }
    i++;
    return i;
}
vector<int> QuickSort::quickSort(std::vector<int> list, int low, int high){
    if(low >= high || low <0)
        return list;
    int p = getPivotIndex(list,low,high);
    list = partition(list,low,high);
    list = quickSort(list,low,p-1);
    list = quickSort(list,p+1,high);

    return list;
}
vector<int> QuickSort::partition(vector<int> list, int low, int high){
    int pivotPosition = high;
    if (high-low>3)
        pivotPosition=low+2;
    int t= list.at(pivotPosition);
    list.at(pivotPosition)=list.at(high);
    list.at(high)=t;
    int pivot = list.at(high);
    int i = low-1;
    for (int j=low;j<high;j++){
        if (list.at(j)<=pivot){
            i++;
            int t=list.at(i);
            list.at(i)=list.at(j);
            list.at(j)=t;
        }
    }
    i++;
    t=list.at(i);
    list.at(i)=list.at(high);
    list.at(high)=t;
    return list;
}
vector<int> QuickSort::sort(vector<int> list){
    return quickSort(list,0,list.size()-1);
}






