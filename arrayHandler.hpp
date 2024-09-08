#include <iostream>

using namespace std;

template <typename T>
class ArrayHandler
{

    private:
        size_t size;
        size_t capacity;
        T* arr;

    public:

        ArrayHandler() {
            size = 0;
            capacity = 0;
            arr = new T[capacity];
        };

        void append(T elem) {
            if (size == capacity) {
                capacity = (capacity == 0) ? 1: capacity * 2;
                T* newarr = new T[capacity];
                for (size_t i = 0; i < size; i++) {
                    newarr[i] = arr[i];
                };
                delete []arr;
                arr = newarr;
            };

            arr[size] = elem;
            size++;                
        };
        
        T getMax() {
            T mx = arr[0];
            for (size_t i = 0; i < size; i++) {
                if (mx < arr[i])
                    mx = arr[i];
            };
            return mx;
        };

        T getMin() {
            T mn = arr[0];
            for (size_t i = 0; i < size; i++) {
                if (arr[0] < mn)
                    mn = arr[i];
            };
            return mn;
        };

        int findElem(T elem) {
            for (size_t i = 0; i < size; i++) {
                if (arr[i] == elem)
                    return i;
            };
            return -1;
        };
                
        T &operator[] (int i) {
            return arr[i];
        };

        ~ArrayHandler(){
            size = 0;
            capacity = 0;
            delete []arr;
        };
        
};