#include<iostream>
using namespace std;
int square(int a){
    return a*a;
}
int rectangle(int a, int b){
    return a*b;
}
float circle(float a){
    return a*a*3.14;
}

int main(){
    int a,b,c;
    cout<<"provide with the no. accordingly to the shape ";
    cout<<"1-square,2-rectangle,3-circle ";
    cin>>c;
    if(c==1){
        cout<<"enter the side of square ";
        cin>>a;
        int q= square(a);
        cout<<q;}
    else if(c==2){
        cout<<"enter the side of length and breath ";
        cin>>a>>b;
        int q= rectangle(a,b);
        cout<<q;
    }else if(c==3){
        float a;
        cout<<"enter the radius ";
        cin>>a>>b;
        float q= circle(a);
        cout<<q;
    }else{
        cout<<"enter the correct value ";
    }
    }