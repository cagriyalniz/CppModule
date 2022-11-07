#include "iter.hpp"

int main(){
    int ar[4] = {2, 4, 11, -2};
    iter(ar, 4, &elmntsOfArr);

    std::string ar2[] = {"hello", "my", "name", "is", "cagri"};
    iter(ar2, 5, &elmntsOfArr);
}