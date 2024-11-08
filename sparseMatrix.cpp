#include <iostream>
#include <chrono>
using namespace std;

int main() {
    int arr[3][3];

    // Input matrix elements
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Display the matrix
    cout << "The representation of the given matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Start timing the actual processing
    using namespace std::chrono;
    high_resolution_clock::time_point t1 = high_resolution_clock::now();

    int zero = 0, nonZero = 0;

    // Count zeros and non-zeros
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (arr[i][j] == 0) {
                zero++;
            } else {
                nonZero++;
            }
        }
    }

    if (zero <= nonZero) {
        cout << "It is not a sparse matrix" << endl;
    } else {
        // Store non-zero elements in sparse matrix form
        int s[nonZero][3];
        int k = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[i][j] != 0) {
                    s[k][0] = i;
                    s[k][1] = j;
                    s[k][2] = arr[i][j];
                    k++;
                }
            }
        }

        // Display the sparse matrix in triplet form
        cout << endl << "Here's the representation of the sparse matrix (row, col, value):" << endl;
        for (int i = 0; i < nonZero; i++) {
            for (int j = 0; j < 3; j++) {
                cout << s[i][j] << " ";
            }
            cout << endl;
        }
    }

    // End timing the actual processing
    high_resolution_clock::time_point t2 = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(t2 - t1);

    cout << endl << "Elapsed processing time: " << duration.count() << " milliseconds" << endl;

    return 0;
}
