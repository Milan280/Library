#include <iostream>

using namespace std;

int main()
{
    int i;
    int age[5]={24,26,27,80,81};
    age[3]=78;

    for(i=0;i<5;i++){
        cout <<age[i] << endl;
    }
    return 0;
}

