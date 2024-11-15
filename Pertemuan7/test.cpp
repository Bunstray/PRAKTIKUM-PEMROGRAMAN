#include <bits/stdc++.h>
#define ll long long
using namespace std;

int fibbonacci(int x) {
    if (x <= 1) return x;
    return fibbonacci(x - 1) + fibbonacci(x - 2);
}

float mean(float h[], int n) {
    if (n == 1) return h[0];
    return (h[n - 1] + (n - 1) * mean(h, n - 1)) / n;
}

int main() {
    ifstream testFile("test_cases.txt");
    if (!testFile.is_open()) {
        cout << "Error opening file" << endl;
        return -1;
    }

    string line;
    int testCaseNumber = 1;

    cout << "Running Test Cases...\n" << endl;

    while (getline(testFile, line)) {
        stringstream ss(line);
        int choice;
        ss >> choice;

        string expectedLine;
        getline(testFile, expectedLine); // Read the expected output line
        stringstream expectedSS(expectedLine);

        bool isCorrect = true; // Tracks correctness of each test case

        if (choice == 1) {
            int x;
            ss >> x;
            int result = fibbonacci(x);

            int expected;
            expectedSS >> expected;

            if (result != expected) {
                isCorrect = false;
                cout << "Test Case " << testCaseNumber << ": WRONG" << endl;
                cout << "  Input: " << choice << " " << x << endl;
                cout << "  Expected: " << expected << ", Got: " << result << endl;
            } else {
                cout << "Test Case " << testCaseNumber << ": CORRECT" << endl;
            }

        } else if (choice == 2) {
            int p;
            ss >> p;
            float h[p];
            for (int i = 0; i < p; i++) {
                ss >> h[i];
            }
            float result = mean(h, p);

            float expected;
            expectedSS >> expected;

            if (abs(result - expected) > 1e-5) { // Allow for slight floating-point differences
                isCorrect = false;
                cout << "Test Case " << testCaseNumber << ": WRONG" << endl;
                cout << "  Input: " << choice << " " << p;
                for (int i = 0; i < p; i++) cout << " " << h[i];
                cout << endl;
                cout << "  Expected: " << expected << ", Got: " << result << endl;
            } else {
                cout << "Test Case " << testCaseNumber << ": CORRECT" << endl;
            }

        } else {
            cout << "Test Case " << testCaseNumber << ": INVALID OPERATION" << endl;
        }

        testCaseNumber++;
    }

    testFile.close();
    return 0;
}
