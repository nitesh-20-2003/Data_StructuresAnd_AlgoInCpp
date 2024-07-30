#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter week number   :\n";
    cin>>a;
    switch (a)
    {
    case 1:
    cout<<"monday";
        break;
        case 2:
    cout<<"tuesday";
        break;
        case 3:
    cout<<"wedday";
        break;
        case 4:
    cout<<"thursday";
        break;
        case 5:
    cout<<"friday";
        break;
        case 6:
    cout<<"saturday";
        break;
        case 7:
    cout<<"sunday";
        break;
    
    default:
    cout<<"invalid option";
        break;
    }

}