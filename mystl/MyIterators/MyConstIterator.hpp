#ifndef MY_CONST_ITERATOR_HPP
#define MY_CONST_ITERATOR_HPP

template <typename T>
class MyConstIterator
{
private:
    const T* mpNode;

public:
    MyConstIterator(const T* ptr);
    MyConstIterator(const MyConstIterator<T>& rhs);
    ~MyConstIterator();
    const MyConstIterator& operator=(const MyConstIterator& rhs);
    MyConstIterator& operator++();
    const MyConstIterator& operator++(int);
    MyConstIterator& operator--();
    const MyConstIterator& operator--(int);
    T& operator*();
    bool operator==(const MyConstIterator& rhs);
    bool operator!=(const MyConstIterator& rhs);
};

#endif
