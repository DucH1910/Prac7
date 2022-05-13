#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H
#include <vector>
class RecursiveBinarySearch{
    private:
        bool binarySearch(std::vector<int>,int,int,int);
    public:
        bool search(std::vector<int>, int);
};
#endif