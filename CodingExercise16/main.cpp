#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int count {0};
    const vector<int> vec {1,2,3,4,5,6,99,-99,12,14,5,69,12,0,0,1};
    size_t index {0};  // See the Q/A forum for more about size_t
                       // size_t is an unsigned int
                       // you can replace size_t with int or unsigned int and it will work fine
    
    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }

    cout << count << endl;
    
    cout << endl;
    return 0;
}

