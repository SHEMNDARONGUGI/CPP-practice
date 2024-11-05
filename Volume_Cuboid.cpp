#include <iostream>
using namespace std;

int main(){
    int l, w, h, V;
    
    cout<<endl<<"Input the Length, height and width of keyboard"<<endl;
    cin>>l>>h>>w;

    V = l * w * h;

    cout<<endl<<"The Volume of cuboid is:"<<V<<endl;

    return 0;
}