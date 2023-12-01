#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int sumOfWeightsExceptTriangular(const vector<int>& boxes) {
    int totalWeight = 0;
    set<int> triangularNumbers;

    for (int i = 1; i <= sqrt(2 * *max_element(boxes.begin(), boxes.end())); i++) {
        triangularNumbers.insert(i * (i + 1) / 2);
    }

    for (int weight : boxes) {
        if (triangularNumbers.find(weight) == triangularNumbers.end()) {
            totalWeight += weight;
        }
    }

    return totalWeight;
}

int boxShiftingProcess(vector<int>& boxes, int N, int K) {
    int consecutiveCycles = 0;

    while (true) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        // Fill the priority queue with the first N elements
        for (size_t i = 0; i < static_cast<size_t>(N); ++i) {
            minHeap.push({boxes[i], static_cast<int>(i)});
        }

        // Find the minimum element in each iteration and rotate
        for (size_t i = N; i < boxes.size(); ++i) {
            int minIndex = minHeap.top().second;
            minHeap.pop();

            minHeap.push({boxes[i], static_cast<int>(i)});
            rotate(boxes.begin() + minIndex, boxes.begin() + minIndex + 1, boxes.begin() + static_cast<int>(i) + 1);
        }

        if (boxes[N - 1] == boxes[N - K]) {
            consecutiveCycles++;
        } else {
            consecutiveCycles = 0;
        }

        if (consecutiveCycles == K) {
            break;
        }
    }

    return sumOfWeightsExceptTriangular(boxes);
}

int main() {
    // ... (Same as before)
   vector<int> boxWeights;
    int N, K;

    // Get the number of boxes
    int numBoxes;
    cout << "Enter the number of boxes: ";
    cin >> numBoxes;

    // Get box weights dynamically
    cout << "Enter the box weights: ";
    for (int i = 0; i < numBoxes; ++i) {
        int weight;
        cin >> weight;
        boxWeights.push_back(weight);
    }

    // Get N and K
    cout << "Enter N and K: ";
    cin >> N >> K;

    // Output
    int result = boxShiftingProcess(boxWeights, N, K);
    cout << "Amount of money to give to workers: " << result << endl;


    return 0;
}
//7 3 6 9 10 2 4 11 5 12 17 1 