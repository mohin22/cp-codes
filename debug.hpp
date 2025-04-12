// Refered (https://codeforces.com/profile/neal)
#ifndef ONLINE_JUDGE
#define ONLINE_JUDGE

#include<bits/stdc++.h>                                                                                                            \
    
using ll = long long;

template <class Fun> class y_combinator_result
{
    Fun fun_;

  public:
    template <class T> explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun))
    {
    }

    template <class... Args> decltype(auto) operator()(Args &&...args)
    {
        return fun_(std::ref(*this), std::forward<Args>(args)...);
    }
};

template <class Fun> decltype(auto) y_combinator(Fun &&fun)
{
    return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}

template <typename A, typename B> std::ostream &operator<<(std::ostream &os, const std::pair<A, B> &p)
{
    return os << '(' << p.first << ", " << p.second << ')';
}

template <typename T_container, typename T = typename std::enable_if<!std::is_same<T_container, std::string>::value,
                                                                     typename T_container::value_type>::type>
std::ostream &operator<<(std::ostream &os, const T_container &v)
{
    os << '{';
    std::string sep;
    for (const T &x : v)
        os << sep << x, sep = ", ";
    return os << '}';
}

void dbg_out()
{
    std::cerr << std::endl;
}

template <typename Head, typename... Tail> void dbg_out(Head H, Tail... T)
{
    std::cerr<< ' ' << H;
    dbg_out(T...);
}

#ifndef MOHIN_DEBUG
#define dbg(...) std::cerr  << __LINE__ << "] (" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#else
#define dbg(...)
#endif

#endif // DEBUG_HPP
