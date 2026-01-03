#include<iostream>
using namespace std;
void fun(){
    static int a=5;
    a++;
    cout<<a<<endl;
}
int main(){
    fun();
    fun();
    fun();
}