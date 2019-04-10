// Details about stl map in C++

#include <map>

using namespace std;

int main() {
    
    map<string, int> M;
    M["A"] = 1;
    M.find("A") != M.end();
    M.erase("A");
    
    //traversing iterator = pair<key, value>, ie. it->second;
    //operator[] vs. map::find()
    //find() preserves map contents
    //[] creates non-existent elements
    //use find() in loops
    //Set & Map are stored as R-B trees
    return 0;
}

