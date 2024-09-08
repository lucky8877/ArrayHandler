#include "arrayHandler.hpp"

int main(){
    ArrayHandler<double>h;
    h.append(2);
    h.append(3);
    h.append(4);
    cout<<h[0]<<endl;
    cout<<h.getMax()<<endl;
    cout<<h.getMin()<<endl;
};