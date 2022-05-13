#include "RecursiveBinarySearch.h"
#include <vector>
using namespace std;
bool RecursiveBinarySearch::binarySearch(std::vector<int> list,int left,int right,int target){
    if(left>right)
        return false;
    int center=(left+right)/2;
    if(list.at(center)==target)
        return true;
    if(list.at(center)>target)
        return binarySearch(list,left,center-1,target);
    return binarySearch(list,center+1,right,target);
}
bool RecursiveBinarySearch::search(std::vector<int> list, int target){
    return binarySearch(list,0,list.size()-1,target);
}