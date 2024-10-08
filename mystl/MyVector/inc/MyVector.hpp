#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

#include <cstddef>
#include "MyIterator.tpp"

template <typename T>
class MyVector
{
private:
    T* mpData;
    size_t mSize;
    size_t mCapacity;

public:
    MyVector();
    MyVector(size_t allocate);
    MyVector(const MyVector<T>& rhs);
    ~MyVector();
    const MyVector<T>& operator=(const MyVector<T>& rhs);

    typedef MyIterator<T> iterator;
    iterator begin();
    iterator end();
    T& operator[](size_t idx);
    T& at(size_t idx);
    void push_back(const T& data);
    void pop_back(void);
    void insert(size_t idx, const T& data);
    size_t size(void);
    size_t capacity(void);
    void resize(size_t size);
    void clear(void);
    bool empty(void);
};

#endif
