#include <iostream>
int main()
{
    std::cout << "Is there a bug here ?"; // no bug anymore
    return 0;
}

/* 
Original buggy version, as seen in Ex1

#include <iostream>
void main()
{
     std::Cout << Is there a bug here?”;
}
*/