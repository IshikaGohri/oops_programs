#include <iostream>

using namespace std;

class employee{

private:
    int empid;
    string empname;
    float salary;

public:
    int emp_details(){

    empid=100;
    empname="ABC";
    salary=10000;
    }

    int show(){
    cout<<"Employee id:"<<empid<<endl;
    cout<<"Employee name:"<<empname<<endl;
    cout<<"Employee salary:"<<salary<<endl;
    }

};


int main()
{
    employee e;
    e.emp_details();
    e.show();
    return 0;
}

