#include <iostream>
using namespace std;

template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }
    T dotProduct(vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3); // vector 1 with a int data type
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.4;
    v1.arr[2] = 3.4;
    vector<float> v2(3); // vector 2 with a float data type
    v2.arr[0] = 0.1;
    v2.arr[1] = 1.90;
    v2.arr[2] = 4.1;
    float a = v1.dotProduct(v2);
    cout << a << endl;

    vector<int> v3(3); // vector 1 with a int data type
    v3.arr[0] = 1;
    v3.arr[1] = 3;
    v3.arr[2] = 3;
    vector<int> v4(3); // vector 2 with a int data type
    v4.arr[0] = 3;
    v4.arr[1] = 1;
    v4.arr[2] = 4;
    float a1 = v3.dotProduct(v4);
    cout << a1 << endl;
    return 0;
}
