#ifndef MYGSOCHEADER
#define MYGSOCHEADER
#include <tuple>
#include <vector>
using namespace std;
template<class... Args>
constexpr auto newTuple(tuple<Args...> t)
{
    tuple< vector<Args>... > newT;

    return newT;
}

template<typename Ts1,typename Ts2>
void f(Ts1 &t1,Ts2 &t2,int X)
{
    //cout << "t2 is " << t2 << endl;
    vector<Ts2> newvec;
    for(int i = 0;i < X;++i)
        t1.push_back(t2);
}

template <typename... Ts1,typename... Ts2, std::size_t... Is>
void fill_vector_util(std::tuple<Ts1...> & t1,std::tuple<Ts2...> & t2,std::index_sequence<Is...> const &,int X)
{
    (f(get<Is>(t1),get<Is>(t2),X),...);
}

template <typename... Ts1,typename... Ts2>
void fill_vector(std::tuple<Ts1...> &t1,std::tuple<Ts2...> &t2,int X)
{
    fill_vector_util(t1, t2, std::make_index_sequence<sizeof...(Ts1)>{},X);
}
auto make_vec_tuple(auto Tup,int X)
{
    auto n = newTuple(Tup);
	constexpr const unsigned S = tuple_size<decltype(Tup)>::value;
	fill_vector(n,Tup,X);
    return n;
}
template<typename x>
auto get_vector(auto vecTup,x Tpq)
{
    return get< vector< x > >(vecTup);
}
#endif // MYGSOCHEADER
/*
*/
