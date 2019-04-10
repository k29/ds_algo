// Details about stl vector

#include <vector>

using namespace std;

int main() {

    vector<int> v1;
    vector<int> v2 = v1; // make a copy
    vector<int> v3(v1); // identical to v2's init above
    vector<int> v4(1000); // specify size: 1000 0's
    vector<int> v6(v1.begin(), v1.end()); //[begin, end] from another array

    return 0;
}