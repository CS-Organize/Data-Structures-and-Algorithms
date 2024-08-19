#include "MyReverseIterator.hpp"

template <typename T>
MyReverseIterator<T>::MyReverseIterator(const T* ptr)
: mpNode(ptr)
{
}
template <typename T>
MyReverseIterator<T>::MyReverseIterator(const MyReverseIterator<T>& rhs)
: mpNode(rhs.mpNode)
{
}
template <typename T>
MyReverseIterator<T>::~MyReverseIterator()
{
}
template <typename T>
const MyReverseIterator<T>& MyReverseIterator<T>::operator=(const MyReverseIterator& rhs)
{
    if (this != &rhs)
    {
        mpNode = rhs.mpNode;
    }
    return (*this);
}
template <typename T>
MyReverseIterator<T>& MyReverseIterator<T>::operator++()
{
    ++mpNode;
    return *this;
}
template <typename T>
const MyReverseIterator<T>& MyReverseIterator<T>::operator++(int)
{
    MyReverseIterator tmp(mpNode);
    ++mpNode;
    return tmp;
}
template <typename T>
MyReverseIterator<T>& MyReverseIterator<T>::operator--()
{
    --mpNode;
    return *this;
}
template <typename T>
const MyReverseIterator<T>& MyReverseIterator<T>::operator--(int)
{
    MyReverseIterator tmp(mpNode);
    --mpNode;
    return tmp;
}
template <typename T>
T& MyReverseIterator<T>::operator*()
{
    return *mpNode;
}
template <typename T>
bool MyReverseIterator<T>::operator==(const MyReverseIterator& rhs)
{
    return mpNode == rhs.mpNode;
}
template <typename T>
bool MyReverseIterator<T>::operator!=(const MyReverseIterator& rhs)
{
    return mpNode != rhs.mpNode;
}
