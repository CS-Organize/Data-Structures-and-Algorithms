#ifndef MY_ITERATOR_HPP
#define MY_ITERATOR_HPP

template <typename T>
class MyIterator
{
private:
    T* mpNode;

public:
    MyIterator(const T* ptr);
    MyIterator(const MyIterator<T>& rhs);
    ~MyIterator();
    const MyIterator& operator=(const MyIterator& rhs);
    MyIterator& operator++();
    const MyIterator& operator++(int);
    MyIterator& operator--();
    const MyIterator& operator--(int);
    T& operator*();
    bool operator==(const MyIterator& rhs);
    bool operator!=(const MyIterator& rhs);
};

#endif
