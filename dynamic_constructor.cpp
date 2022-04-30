#include <iostream>
using namespace std;

class demo {

const char* p;

public:

demo(){

    p = new char[6];
    p="hello";
}

void display(){
cout << p << endl;
}
};

int main()
{
    demo obj;
    obj.display();
}
