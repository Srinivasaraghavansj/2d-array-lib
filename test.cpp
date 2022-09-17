#include <iostream>
#include <d2darray.h>
#include <chrono>
#include <thread>

int main(){

int d_x=1000,d_y=1000;
d2darr<float> arr = d2darr<float>(d_x,d_y);
for(int i = 0;i<d_x;i++){
for(int j = 0;j<d_y;j++){
    arr.set_element_at(i,j,(float)i+j+(i*(d_x-1)+1));
}}

int a=0,b=0; // for searched index
auto start = std::chrono::high_resolution_clock::now();
arr.find_element(873400,a,b);
// std::this_thread::sleep_for(std::chrono::microseconds(1));
auto end = std::chrono::high_resolution_clock::now();
std::cout << "Found Index: "<< a << "," << b << "\n";
std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::microseconds>(end-start).count() << "us\n";

start = std::chrono::high_resolution_clock::now();
arr.find_element_efficiently(873400,a,b);
// std::this_thread::sleep_for(std::chrono::microseconds(1));
end = std::chrono::high_resolution_clock::now();
std::cout << "Found Index efficiently: "<< a << "," << b << "\n";
std::cout << "Time taken: " << std::chrono::duration_cast<std::chrono::microseconds>(end-start).count() << "us\n";

return 0;
}
