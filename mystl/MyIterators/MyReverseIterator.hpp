#ifndef MY_REVERSE_ITERATOR_HPP
#define MY_REVERSE_ITERATOR_HPP

template <typename T>
class MyReverseIterator
{
private:
    T* mpNode;

public:
    MyReverseIterator(const T* ptr);
    MyReverseIterator(const MyReverseIterator<T>& rhs);
    ~MyReverseIterator();
    const MyReverseIterator& operator=(const MyReverseIterator& rhs);
    MyReverseIterator& operator++();
    const MyReverseIterator& operator++(int);
    MyReverseIterator& operator--();
    const MyReverseIterator& operator--(int);
    T& operator*();
    bool operator==(const MyReverseIterator& rhs);
    bool operator!=(const MyReverseIterator& rhs);
};

#endif
