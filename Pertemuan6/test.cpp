#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct necessity {
    int code;
    string name;
    float price;
    int amount;
};

string formatPrice(float price) {
    ostringstream oss;
    oss << fixed << setprecision(2) << price;
    string priceStr = oss.str();
    if (priceStr.find('.') != string::npos) {
        priceStr.erase(priceStr.find_last_not_of('0') + 1, string::npos);
        if (priceStr.back() == '.') {
            priceStr.pop_back();
        }
    }
    return priceStr;
}

int main() {
    ifstream dataFile("test.txt");

    if (!dataFile.is_open()) {
        cout << "Error: Unable to open test.txt file." << endl;
        return 1;
    }

    string line;
    int testCaseNumber = 1;
    bool isSame = true;

    while (true) {
        int n;
        float mean = 0;

        
        dataFile >> n;
        dataFile.ignore(); 

        if (dataFile.eof()) break;

        if (n > 50) {
            cout << "Test Case " << testCaseNumber << ": Error: Too much request" << endl;
            while (getline(dataFile, line)) {
                if (line == "---") break;
            }
            testCaseNumber++;
            continue;
        }

        necessity items[n];
        for (int i = 0; i < n; i++) {
            dataFile >> items[i].code >> items[i].name >> items[i].price >> items[i].amount;
            mean += items[i].price;
        }
        mean /= n;

        dataFile.ignore();

        vector<string> generatedOutput;
        for (int i = 0; i < n; i++) {
            generatedOutput.push_back("Item (" + to_string(i + 1) + ")");
            generatedOutput.push_back("Code : " + to_string(items[i].code));
            generatedOutput.push_back("Name : " + items[i].name);
            generatedOutput.push_back("Price : Rp" + formatPrice(items[i].price));
            generatedOutput.push_back("Amount : " + to_string(items[i].amount));
            generatedOutput.push_back(""); // Empty line
        }
        generatedOutput.push_back("Average Price: Rp" + formatPrice(mean));

        while (getline(dataFile, line)) {
            if (line == "---") break;
        }

        cout << "Test Case " << testCaseNumber << ":\n";
        int lineNumber = 1;
        bool testCaseMatch = true;
        for (const auto& generatedLine : generatedOutput) {
            if (!getline(dataFile, line) || generatedLine != line) {
                cout << "Difference found at line " << lineNumber << ":\n";
                cout << "Expected: " << line << "\n";
                cout << "Generated: " << generatedLine << "\n";
                testCaseMatch = false;
            }
            lineNumber++;
        }

        if (getline(dataFile, line) && !line.empty() && line != "---") {
            cout << "The expected output has extra lines beyond the generated output.\n";
            testCaseMatch = false;
        }

        if (testCaseMatch) {
            cout << "The generated output matches the expected output for this test case." << endl;
        } else {
            cout << "The generated output does NOT match the expected output for this test case." << endl;
            isSame = false;
        }

        testCaseNumber++;
        cout << "--------------------------------------" << endl;
    }

    dataFile.close();

    if (isSame) {
        cout << "All test cases passed." << endl;
    } else {
        cout << "Some test cases did not match the expected output." << endl;
    }

    return 0;
}
