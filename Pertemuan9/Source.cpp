#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Siswa {
    string nisn;
    string nama;
    int nilai;
};

void printData(const vector<Siswa>& data) {
    for (const auto& siswa : data) {
        cout << siswa.nisn << " " << siswa.nama << " " << siswa.nilai << endl;
    }
    cout << endl;
}

void insertionSort(vector<Siswa>& data, bool sortByNISN) {
    for (size_t i = 1; i < data.size(); i++) {
        Siswa key = data[i];
        int j = i - 1;
        while (j >= 0 && (sortByNISN ? data[j].nisn > key.nisn : data[j].nilai > key.nilai)) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

void selectionSort(vector<Siswa>& data, bool sortByNISN) {
    for (size_t i = 0; i < data.size() - 1; i++) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < data.size(); j++) {
            if (sortByNISN ? data[j].nisn < data[minIndex].nisn : data[j].nilai < data[minIndex].nilai) {
                minIndex = j;
            }
        }
        swap(data[i], data[minIndex]);
    }
}

void bubbleSort(vector<Siswa>& data, bool sortByNISN) {
    for (size_t i = 0; i < data.size() - 1; i++) {
        for (size_t j = 0; j < data.size() - i - 1; j++) {
            if (sortByNISN ? data[j].nisn > data[j + 1].nisn : data[j].nilai > data[j + 1].nilai) {
                swap(data[j], data[j + 1]);
            }
        }
    }
}

int binarySearch(const vector<Siswa>& data, const string& targetNISN) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid].nisn == targetNISN) return mid;
        else if (data[mid].nisn < targetNISN) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

void sequentialSearchAndUpdate(vector<Siswa>& data, int targetNilai, const string& newName) {
    for (auto& siswa : data) {
        if (siswa.nilai == targetNilai) {
            siswa.nama = newName;
        }
    }
}

int main() {
    vector<Siswa> data = {
        {"9960312699", "Handi Ramadhan", 90},
        {"9963959682", "Rio Alfandra", 55},
        {"9950310962", "Ronaldo Valentino Uneputty", 80},
        {"9970272750", "Achmad Yaumil Fadjri R.", 60},
        {"9970293945", "Alivia Rahma Pramesti", 70},
        {"9952382180", "Ari Lutfianto", 65},
        {"9965653989", "Arief Budiman", 60}
    };

    cout << "Data asli:\n";
    printData(data);

    // Sorting by NISN
    cout << "Pengurutan menaik berdasarkan NISN (Insertion Sort):\n";
    insertionSort(data, true);
    printData(data);

    cout << "Pengurutan menaik berdasarkan NISN (Selection Sort):\n";
    selectionSort(data, true);
    printData(data);

    cout << "Pengurutan menaik berdasarkan NISN (Bubble Sort):\n";
    bubbleSort(data, true);
    printData(data);

    // Sorting by Nilai
    cout << "Pengurutan menaik berdasarkan Nilai (Insertion Sort):\n";
    insertionSort(data, false);
    printData(data);

    cout << "Pengurutan menaik berdasarkan Nilai (Selection Sort):\n";
    selectionSort(data, false);
    printData(data);

    cout << "Pengurutan menaik berdasarkan Nilai (Bubble Sort):\n";
    bubbleSort(data, false);
    printData(data);

    // Binary Search for NISN
    string targetNISN = "9950310962";
    cout << "Pencarian data dengan NISN " << targetNISN << " menggunakan pencarian biner:\n";
    insertionSort(data, true); // Ensure the data is sorted by NISN for binary search
    int index = binarySearch(data, targetNISN);
    if (index != -1) {
        cout << "Data ditemukan: " << data[index].nama << ", Nilai: " << data[index].nilai << endl;
    } else {
        cout << "Data tidak ditemukan.\n";
    }

    // Sequential search and update
    cout << "\nMengubah nama siswa dengan nilai 60 menjadi Joko:\n";
    sequentialSearchAndUpdate(data, 60, "Joko");
    printData(data);

    return 0;
}
