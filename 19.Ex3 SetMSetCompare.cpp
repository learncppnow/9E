#include <set>
#include <iostream>

using namespace std;

template <typename T>
void DisplayContent(const T& cont)
{
	for(auto element = cont.cbegin(); element != cont.cend(); ++element)
		cout << *element << " ";
}

int main()
{
	multiset<int> msetIntegers;

	msetIntegers.insert(5);
	msetIntegers.insert(5);
	msetIntegers.insert(5);

	set<int> setIntegers;
	setIntegers.insert(5);
	setIntegers.insert(5);
	setIntegers.insert(5);

	cout << "Displaying the contents of the multiset: ";
	DisplayContent(msetIntegers);
	cout << endl;

	cout << "Displaying the contents of the set: ";
	DisplayContent(setIntegers);
	cout << endl;

	return 0;
}