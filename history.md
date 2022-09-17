## basic header
```
#include <iostream>
```


## cout basic
```
std::cout << "Body Soda here\n";
```



## int array init
```
int a[4] = {1,5,7,4};
```

## print array address
```
int a[4] = {1,5,7,4};
std::cout<<a<<"\n";
std::cout << &a <<"\n";
```


## loop through array
```
int a[4] = {1,5,7,4};
for(int i=0;i<4;i++){
std::cout<<a[i]<<"\n";
}
```

## print first element of array using pointers
```
int a[4] = {1,5,7,4};
std::cout << *a <<"first element\n";
```


## print second element of array using pointers
```
int a[4] = {1,5,7,4};
std::cout << *(a+1) <<"\n";
```


## print third element of array using pointers
```
int a[4] = {1,5,7,4};
std::cout << *(a+2) <<"\n";
```




## 2D array mathematics - memory optimization
```
int a[3][3];
for(int i = 0;i<3;i++){
for(int j = 0;j<3;j++){
    a[i][j] = i+j+(i*(3-1)+1);
    std::cout<<a[i][j]<<",";}
    std::cout<<"\n";}
```

### iter 1(i+j+1) 1 = (i*(3-1)+1)//(i*(sizeofarray-1)+1)
```
I : 0 0 0
J : 0 1 2 
O : 1 2 3
```

### iter 2 (i+j+3) 3 = 1*2+1
```
I : 1 1 1
J : 0 1 2 
O : 4 5 6
```

### iter 3 (i+j+5) 5 = 2*2 +1
```
I : 2 2 2
J : 0 1 2 
O : 7 8 9
```


## Define new HPP file d2darray.hpp
### Include guard
```
#ifndef D2ARRAY_HPP
#define D2ARRAY_HPP
#endif//D2ARRAY_HPP 
```

## # are known as precompiler directives / macros






