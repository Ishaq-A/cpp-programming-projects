#include <iostream>
#include <vector>

using namespace std;

int main()
{

    double average_temp{};
    double running_sum{};
    int size{0};

    for(auto temp : {60.2, 80.1, 90.0, 78.2}) {
        running_sum += temp;
        ++size;
    }

    average_temp = running_sum / size;
    
    cout << endl;
    return 0;
}

