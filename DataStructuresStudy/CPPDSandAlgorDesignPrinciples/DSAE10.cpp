#include <iostream>
#include <queue>
#include <vector>

struct median {
    std::priority_queue<int> maxHeap;
    std::priority_queue<int, std::vector<int>, std::greater<int>> minHeap;

    void insert(int data) {
        if (maxHeap.size() == 0) {
            maxHeap.push(data);
            return;
        }
        
        //// 최대 힙과 최소 힙의 균형(높이)을 맞추기 위해 다음의 작업을 수행함.
        // (1) 최대 힙의 크기와 최소 힙의 크기가 같을 경우
        if (maxHeap.size() == minHeap.size()) {
            if (data <= get()) {                // 새로 들어오는 데이터가 기존 데이터의 중앙값보다 작을 경우
                maxHeap.push(data);
            }
            else {                              // 새로 들어오는 데이터가 기존 데이터의 중앙값보다 클 경우
                minHeap.push(data);
            }
            return;
        }

        // (2) 최대 힙의 크기가 최소 힙의 크기보다 작을 경우
        // -> 최대 힙의 크기를 최소 힙의 크기와 맞추기 위해 최대 힙의 크기를 늘려야 함.
        if (maxHeap.size() < minHeap.size()) {
            if (data > get()) {                 // 1. 새로 들어오는 데이터가 기존 데이터의 중앙값보다 클 경우
                maxHeap.push(minHeap.top());    // 최소 힙의 최상단 원소를 최대 힙에 삽입
                minHeap.pop();                  // 최소 힙의 최상단 원소 제거
                minHeap.push(data);             // 최소 힙에 새로 들어오는 데이터 삽입
            }
            else {                              // 2. 새로 들어오는 데이터가 기존 데이터의 중앙값보다 작을 경우
                maxHeap.push(data);             // 최대 힙에 데이터 삽입
            }
            return;
        }

        // (3) 최대 힙의 크기가 최소 힙의 크기보다 클 경우
        // -> 최소 힙의 크기를 최대 힙의 크기와 맞추기 위해 최소 힙의 크기를 늘려야 함.
        if (data < get()) {                 // 1. 새로 들어오는 데이터가 기존의 데이터보다 작을 경우
            minHeap.push(maxHeap.top());    // 최대 힙의 최상단 원소를 최소 힙에 삽입
            maxHeap.pop();                  // 최대 힙의 최상단 원소 제거
            maxHeap.push(data);             // 최대 힙에 데이터 삽입
        }
        else {                              // 2. 새로 들어오는 데이터가 기존의 데이터보다 클 경우
            minHeap.push(data);             // 최소 힙에 데이터 삽입
        }
    }

    double get() {
        if (maxHeap.size() == minHeap.size()) {
            return (maxHeap.top() + minHeap.top()) / 2.0;
        }
        if (maxHeap.size() < minHeap.size()) {
            return minHeap.top();
        }
        return maxHeap.top();
    }
};

int main() {
    median med;

    med.insert(1);
    std::cout << "1 삽입 후 중앙값: " << med.get() << std::endl;

    med.insert(5);
    std::cout << "5 삽입 후 중앙값: " << med.get() << std::endl;

    med.insert(2);
    std::cout << "2 삽입 후 중앙값: " << med.get() << std::endl;

    med.insert(10);
    std::cout << "10 삽입 후 중앙값: " << med.get() << std::endl;

    med.insert(40);
    std::cout << "40 삽입 후 중앙값: " << med.get() << std::endl;

    return 0;
}