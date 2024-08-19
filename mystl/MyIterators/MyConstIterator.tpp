#include "MyConstIterator.hpp"

template <typename T>
MyConstIterator<T>::MyConstIterator(const T* ptr)
: mpNode(ptr)
{
}
template <typename T>
MyConstIterator<T>::MyConstIterator(const MyConstIterator<T>& rhs)
: mpNode(rhs.mpNode)
{
}
template <typename T>
MyConstIterator<T>::~MyConstIterator()
{
}
template <typename T>
const MyConstIterator<T>& MyConstIterator<T>::operator=(const MyConstIterator& rhs)
{
    if (this != &rhs)
    {
        mpNode = rhs.mpNode;
    }
    return (*this);
}
template <typename T>
MyConstIterator<T>& MyConstIterator<T>::operator++()
{
    ++mpNode;
    return *this;
}
template <typename T>
const MyConstIterator<T>& MyConstIterator<T>::operator++(int)
{
    MyConstIterator tmp(mpNode);
    ++mpNode;
    return tmp;
}
template <typename T>
MyConstIterator<T>& MyConstIterator<T>::operator--()
{
    --mpNode;
    return *this;
}
template <typename T>
const MyConstIterator<T>& MyConstIterator<T>::operator--(int)
{
    MyConstIterator tmp(mpNode);
    --mpNode;
    return tmp;
}
template <typename T>
T& MyConstIterator<T>::operator*()
{
    return *mpNode;
}
template <typename T>
bool MyConstIterator<T>::operator==(const MyConstIterator& rhs)
{
    return mpNode == rhs.mpNode;
}
template <typename T>
bool MyConstIterator<T>::operator!=(const MyConstIterator& rhs)
{
    return mpNode != rhs.mpNode;
}
