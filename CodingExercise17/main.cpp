#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int result {};
    vector<int> vec {1,2,3,4,5,6};

    for(size_t i = 0; i < vec.size(); ++i) {
        for(size_t j = i + 1; j < vec.size(); ++j) {
            result += vec.at(i) * vec.at(j);
        }
    }

    cout << result << endl;
    
    cout << endl;
    return 0;
}

