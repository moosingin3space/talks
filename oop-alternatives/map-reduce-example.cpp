template<typename T, typename Iterator>
T sum(Iterator start, Iterator end) 
{
    return std::accumulate(start, end, T(0), std::plus<T>());
}

template<typename T, typename Iterator>
T product(Iterator start, Iterator end)
{
    return std::accumulate(start, end, T(0), std::times<T>());
}

template<typename T, typename Iterator>
T sumOfSquares(Iterator start, Iterator end)
{
    return std::accumulate(start, end, T(0), [](T x, T y) { return x*x + y*y; });
}
