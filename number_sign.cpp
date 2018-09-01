#include <iostream>

using namespace std;

int main()
{
    int val;
    cin>>val;
    if(val>0){
        cout<<"Positive";
    } else if (val<0){
        cout<<"Negative";
    } else{
        cout<<"Zero";
    }

    return 0;
}

