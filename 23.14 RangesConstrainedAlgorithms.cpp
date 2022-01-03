#include<algorithm>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

template <typename T>
void DisplayContents(const T& container)
{
    for (const auto& element : container)
        cout << element << ' ';

    cout << endl;
}

int main()
{
    vector<int> numsInVec{ 2021, -1, 42, 404949, -981 };
    cout << "Initial contents of vector: ";
    DisplayContents(numsInVec);

    cout << "Enter integer to search for: ";
    int numToFind = 0;
    cin >> numToFind;

    auto element = std::ranges::find(numsInVec, numToFind);
    if (element != numsInVec.end())
        cout << "Value " << *element << " found!" << endl;
    else
        cout << "The number isn't in the range\n";

    std::ranges::sort(numsInVec);
    cout << "Sorting the range now\n";
    DisplayContents(numsInVec);

    std::ranges::fill(numsInVec, 0);
    cout << "Reset vector contains: ";
    DisplayContents(numsInVec);

    string strHello("Hello C++20 constrained algorithms");
    cout << "Original string: " << strHello << endl;
    std::ranges::for_each(strHello, [](auto& c) {c = ::tolower(c); });
    cout << "In lower case: " << strHello << endl;

    return 0;
}