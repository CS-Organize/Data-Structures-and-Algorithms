#include <iostream>
#include "MyVector.tpp"
#include <vector>
using namespace std;


void myvector_test(void)
{
    MyVector<int> nv(10);
    MyVector<int> v;
    cout  << "nv.capacity() : " << nv.capacity() << '\n'
    << "nv.size() : " << nv.size() << '\n';

    for (size_t i = 0; i < 10; i++)
    {
        cout << nv[i] << ' ';
    }

    cout << "\n----------------CAPACITY----------------\n";
    for (size_t i = 1; i <= 100; i++)
    {
        v.push_back(i);
        cout << v.capacity() << '\n';
    }
    cout << "----------------------------------------\n";

    v.resize(10);
    v.push_back(1);
    v.push_back(2);
    cout << "v.size() : " << v.size() << '\n';
    cout << "v.capacity() : " << v.capacity() << '\n';
    for (int i = 0; i < 100; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
    v.insert(2, 999);
    for (int i = 0; i < 100; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

void vector_test(void)
{
    vector<int> nv(10);
    vector<int> v;
    cout  << "nv.capacity() : " << nv.capacity() << '\n'
    << "nv.size() : " << nv.size() << '\n';

    for (size_t i = 0; i < 10; i++)
    {
        cout << nv[i] << ' ';
    }

    cout << "\n----------------CAPACITY----------------\n";
    for (size_t i = 1; i <= 100; i++)
    {
        v.push_back(i);
        cout << v.capacity() << '\n';
    }
    cout << "----------------------------------------\n";

    v.resize(10);
    v.push_back(1);
    v.push_back(2);
    cout << "v.size() : " << v.size() << '\n';
    cout << "v.capacity() : " << v.capacity() << '\n';
    for (int i = 0; i < 100; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';

    for (int i = 0; i < 100; i++)
    {
        cout << v[i] << ' ';
    }
    cout << '\n';
}

int	main(void)
{
    myvector_test();
    vector_test();
    return 0;
}
