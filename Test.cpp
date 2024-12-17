#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    
    int hour = n/3600;
    n = n % 3600;

    int mint = n/ 60;
    n = n % 60;

    int sec = n;

    cout<<"hour: "<<hour<<endl;
    cout<<"mint: "<< mint<<endl;
    cout<<"sec: "<< sec<<endl;

    return 0;
}