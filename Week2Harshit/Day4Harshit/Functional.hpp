#ifndef FUNCTIONAL_HPP
#define FUNCTIONAL_HPP
#include<iostream>
#include<functional>
#include <vector>

using Container = std::vector<int>;

using Fntype = std::function < void (Container&) > ;

void Adaptor(Fntype fn, Container& data);

extern Fntype firstEle;
extern Fntype lastEle;
extern Fntype sizeOfcontainer;

#endif // FUNCTIONAL_HPP
