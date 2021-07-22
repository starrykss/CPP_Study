#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int>::size_type sz;

    vector<int> vec1;
    sz = vec1.capacity();
    cout << "벡터1의 용량을 늘리는 중:" << endl;

    for (int i = 0; i < 100; i++) {
        vec1.push_back(i);

        if (sz != vec1.capacity()) {
            sz = vec1.capacity();
            cout << "용량 변화: " << sz << endl;
        }
    }

    cout << "--------------------------------" << endl;

    vector<int> vec2;
    sz = vec2.capacity();
    vec2.reserve(100);          // reserve 함수 사용
    cout << "벡터2의 용량을 늘리는 중:" << endl;

    for (int i = 0; i < 200; i++) {
        vec2.push_back(i);
        
        if (sz != vec2.capacity()) {
            sz = vec2.capacity();
            cout << "용량 변화: " << sz << endl;
        }
    }

    return 0;
}