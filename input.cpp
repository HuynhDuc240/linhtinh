#include "input.h"

input::input(){
    for(auto x : this->name){
        cout<< x <<":";
        double temp;
        cin>> temp;
        this->elements.insert(make_pair(x,temp));
    }
}

void input::debug(){
    for(auto x : this->elements){
        cout<<x.first<<"\t"<<x.second;
    }
}