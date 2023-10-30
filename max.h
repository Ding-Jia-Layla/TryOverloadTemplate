//family functions for different type to call 
#ifndef MAX_H_
#define MAX_H_

template <typename T> 
T const &max(T const & a, T const & b)
{
	std::cout << __PRETTY_FUNCTION__ << '\n';
	// if a<b then use b else use a
	return a < b ? b : a;
}

#endif