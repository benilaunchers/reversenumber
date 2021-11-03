#include<iostream>
using namespace std;
int convert(int );
int main(){
    int num;
    cin>>num;
    cout<<convert(num);
}
int convert(int x){
    int r;
    int c = 0;
    while (x > 0){
        r = x % 10;
        c = c * 10 + r;
        x = x / 10;
    }
    return c;
}