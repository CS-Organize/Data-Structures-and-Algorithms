#include "MyIterator.hpp"

template <typename T>
MyIterator<T>::MyIterator(const T* ptr)
: mpNode(ptr)
{
}
template <typename T>
MyIterator<T>::MyIterator(const MyIterator<T>& rhs)
: mpNode(rhs.mpNode)
{
}
template <typename T>
MyIterator<T>::~MyIterator()
{
}
template <typename T>
const MyIterator<T>& MyIterator<T>::operator=(const MyIterator& rhs)
{
    if (this != &rhs)
    {
        mpNode = rhs.mpNode;
    }
    return (*this);
}
template <typename T>
MyIterator<T>& MyIterator<T>::operator++()
{
    ++mpNode;
    return *this;
}
template <typename T>
const MyIterator<T>& MyIterator<T>::operator++(int)
{
    MyIterator tmp(mpNode);
    ++mpNode;
    return tmp;
}
template <typename T>
MyIterator<T>& MyIterator<T>::operator--()
{
    --mpNode;
    return *this;
}
template <typename T>
const MyIterator<T>& MyIterator<T>::operator--(int)
{
    MyIterator tmp(mpNode);
    --mpNode;
    return tmp;
}
template <typename T>
T& MyIterator<T>::operator*()
{
    return *mpNode;
}
template <typename T>
bool MyIterator<T>::operator==(const MyIterator& rhs)
{
    return mpNode == rhs.mpNode;
}
template <typename T>
bool MyIterator<T>::operator!=(const MyIterator& rhs)
{
    return mpNode != rhs.mpNode;
}
