#include <iostream>

template<typename T, int N>
class Array
{
private:
    T m_Array[N];
public:
    int GetSize() const { return N; }
    void SetSize(T type) { m_Array[0] = type; }
    T GetArr() const { return m_Array[0]; }
};

int main()
{
    Array<int, 10> arr;

    std::cout << arr.GetSize() << std::endl;
    arr.SetSize(50);
    std::cout << arr.GetArr() << std::endl;

    return 0;
}
