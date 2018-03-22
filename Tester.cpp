#include "MyHeaderFile.hpp"
#include <iostream>
using namespace std;
int main() {
	// float check = TooSmallToStore; Uncomment to see the error!
	auto Tup = make_tuple(1,'a');
	auto n = make_vec_tuple(Tup,8);
    char q = 's';
    auto newch = get_vector(n,q);
    cout << "Test : " << endl;
    for(auto x:newch)
        cout << x << " ";
	return 0;
}
