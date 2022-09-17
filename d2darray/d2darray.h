#ifndef D2ARRAY_HPP
#define D2ARRAY_HPP

#include <cstdlib>
#include <iostream>

template <typename T>
class d2darr{

public:
d2darr(int x, int y);
T get_element_at(int x, int y);
void set_element_at(int x, int y,T ele);
void show_arr();
void find_element(T ele, int &x, int &y);
void find_element_efficiently(T ele, int &x, int &y);


private:
T *data;
int arr_dim[2];
};
#endif//D2ARRAY_HPP

