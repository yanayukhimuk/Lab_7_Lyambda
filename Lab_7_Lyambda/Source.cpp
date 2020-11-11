#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
#include <string_view>
#include <array>
using namespace std; 

static bool containsBerry(string str){
    return (str.find("berry") != string::npos);
}

int main() {
   vector<int> v = { 20, 4, 7, 6, 90, 8, 5, 6 };
    size_t count = 0;
    for_each(v.begin(), v.end(), [](int x) {cout << x << " "; });
    cout << endl;
    sort(v.begin(), v.end(), [&count](int& a, int& b) {
        ++count;
        return a < b;
        });
    cout << "The amount of replaces: " << count << endl;
    for_each(v.begin(), v.end(), [](int x) {cout << x << " "; });
    cout << endl;

   
    array<string, 4> arr{ "blueberry", "raspberry", "strawberry", "blackberry" };
    auto found{ find_if(arr.begin(), arr.end(), containsBerry) };

    if (found == arr.end())
    {
        cout << "No berriess\n";
    }
    else
    {
        cout << "Found " << *found << '\n';
    }
    return 0;
} 