This program was tested with GCC 7.2.0 in Godbolt.org.
The program uses fold expression which is a C++17 feature, so you should use '-std=c++17'.

Functions:
1. make_vec_tuple(std::tuple T,int X) :
Returns a tuple with the same elements as T but inside vectors,repeated X times.

2. get_vector(std::tuple,type X) :
Returns the vector that has the corresponding 'type' as X.
Note : We throw an error if the tuple has more than 1 element of same type.

Values:
1. TooSmallToStore : 
It is a floating-point value which cannot be stored inside 'float' type.
It is reduced to zero during compilation.
