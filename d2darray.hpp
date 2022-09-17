#ifndef D2ARRAY_HPP
#define D2ARRAY_HPP

#include <cstdlib>

class d2darr{

public:

d2darr(int x,int y){
    data = (int*)calloc(x*y,sizeof(int));
    arr_dim[0] = x;
    arr_dim[1] = y;

}

int get_element_at(int x,int y){
    if(x>arr_dim[0] ||y>arr_dim[1]){
        throw "Array index out of range!";
    }
return data[arr_dim[0]*y+x];
}

void set_element_at(int x,int y,int ele){
    if(x>arr_dim[0] || y>arr_dim[1]){
        throw "Array index out of range!";
    }
 data[arr_dim[0]*y+x] = ele;
}


private:
int *data;
int arr_dim[2];
};
//2D:
//1 2 3
//4 5 6

//1D row major: arr_dim[0]*y+x
// 1 2 3 4 5 6

//1D col major: arr_dim[1]*x+y
// 1 4 2 5 3 6

#endif//D2ARRAY_HPP 

