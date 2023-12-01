#include <iostream>
#include <vector>

using namespace std;

// Function to perform Bubble Sort and return the number of passes
int bubbleSortasc(vector<int>& arr) {
    int n = arr.size();
    int passes = 0;

    for (int i = 0; i < n; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                 passes++;
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

       

        if (!swapped) {
            break;
        }
    }

    return passes;
}

int bubbleSortdesc(vector<int>& arr) {
    int n = arr.size();
    int passes = 0;

    for (int i = 0; i < n; ++i) {
        bool swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] < arr[j + 1]) {
                 passes++;
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

       

        if (!swapped) {
            break;
        }
    }

    return passes;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements separated by space: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int passesA = bubbleSortasc(arr);
    int passesD = bubbleSortdesc(arr);

    if(passesA<=passesD){
        cout << "Array sorted in ascending order in " << passesA << " passes." << endl;
    }else{
        cout << "Array sorted in ascending order in " << passesD << " passes." << endl;
    }

    

    
   

    return 0;
}
