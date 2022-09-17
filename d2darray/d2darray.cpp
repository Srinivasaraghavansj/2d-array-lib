#include "d2darray.h"

template <class T>
d2darr<T>::d2darr(int x, int y){
     data = (T*)calloc(x*y, sizeof(T));
    arr_dim[0] = x;
    arr_dim[1] = y;
}

template <class T>
T d2darr<T>::get_element_at(int x,int y){
    if(x > arr_dim[0] || y > arr_dim[1]){
        throw "Array index out of range!";
    }
return data[arr_dim[0] * y + x];
}


template <class T>
void d2darr<T>::set_element_at(int x,int y,T ele){
    if(x > arr_dim[0] || y > arr_dim[1]){
        throw "Array index out of range!";
    }
 data[arr_dim[0] * y + x] = ele;
}


template <class T>
void d2darr<T>::show_arr(){
std::cout << "[";
for(int i = 0;i < arr_dim[0]; i++){
    std::cout << "[";
for(int j = 0;j < arr_dim[1];j++){
     std::cout << this->get_element_at(i,j);
     if(j < arr_dim[1] - 1)
      std::cout << ",";
}
std::cout << "]" << ((i < arr_dim[0]-1) ? "\n" : "");
}
std::cout<<"]\n";
}

template <class T>
void d2darr<T>::find_element(T ele, int &x, int &y){
    for(int i=0; i<arr_dim[0]*arr_dim[1]; i++){
        if(data[i]==ele){
            for(int a=0;a<arr_dim[0];a++){
                for(int b=0;b<arr_dim[1];b++){
                    if((arr_dim[0] * b + a) == i){
                        x=a;
                        y=b;
                        return;
                    }
                }
            }
        }
    }
    x=-1;
    y=-1;

}


template <class T>
void d2darr<T>::find_element_efficiently(T ele, int &x, int &y){
    for(int i=0; i<arr_dim[0]*arr_dim[1]; i++){
        if(data[i]==ele){
            x = i % arr_dim[0];
            y = i / arr_dim[0];
            return;
        }
    }
    x=-1;
    y=-1;

}

template class d2darr<int>;
template class d2darr<float>;