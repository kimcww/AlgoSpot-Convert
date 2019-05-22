#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

int i = 1;
void Convert(double D, string S)
{
    if(S.compare("kg") == 0){
        D *= 2.2046;
        cout<<i<<" "<<D<<" lb"<<endl;
    }
    if(S.compare("lb") == 0){
        D *= 0.4536;
        cout<<i<<" "<<D<<" kg"<<endl;
    }
    if(S.compare("l") == 0){
        D *= 0.2642;
        cout<<i<<" "<<D<<" g"<<endl;
    }
    if(S.compare("g") == 0){
        D *= 3.7854;
        cout<<i<<" "<<D<<" l"<<endl;
    }
    i++;
}

int main()
{
    double D;
    string S;
    int input;
    cin>>input;

    cout<<fixed;
    cout.precision(4);

    for(int i = 0 ; i< input ; i++){
        cin>>D>>S;
        Convert(D,S);
    }

    return 0;
}

