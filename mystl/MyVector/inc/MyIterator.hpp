#ifndef ITERATOR_HPP
#define ITERATOR_HPP

template <typename T>
class MyIterator
{
private:
    T* mpNode;

public:
    MyIterator(const T* ptr);
    MyIterator(const MyIterator<T>& rhs);
    ~MyIterator();
    MyIterator& operator++();
    const MyIterator& operator++(int);
    MyIterator& operator--();
    const MyIterator& operator--(int);
    T& operator*();
    bool operator==(const MyIterator& rhs);
    bool operator!=(const MyIterator& rhs);
};

#endif
