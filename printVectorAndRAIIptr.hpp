/*
   printVectorAndRAIIptr.hpp
   By: Jared Maltos
   Created: 12/3/2019
   CS 202: Homework 06
   Purpose: .hpp file for Homework 6
   Details: Put printVectorAndRAIIptr.hpp and templateTest.cpp into a project to work
*/

#ifndef _RAII_HPP_
#define _RAII_HPP_

#include <iostream>

#include <vector>
using std::vector;

#include <ostream>
using std::ostream;

template<typename T>
void printVector(ostream& os, vector<T> vec) {
	for (T ent : vec) {
		os << ent << '\n';
	}
}

template<typename T>
class RAIIPtr {
public:
	T* ptr;
	RAIIPtr(T* ptr)
		: ptr(ptr) {}
	~RAIIPtr() {
		delete(ptr);
	}
	T& operator*() { return *ptr; }
	T* operator->() { return ptr; }
};

#endif
//end of file