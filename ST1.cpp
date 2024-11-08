#include <iostream>
#include <fstream>

using namespace std;

// Creating a File
void createFile(const string& filename) {
    ofstream file(filename);
    if (file) {
        cout << "File '" << filename << "' created successfully." << endl;
        file.close();
    } else {
        cout << "Error creating file." << endl;
    }
}

// Writing to a File
void writeToFile(const string& filename, const string& data) {
    ofstream file(filename);
    if (file) {
        file << data;
        cout << "Data written to file successfully." << endl;
        file.close();
    } else {
        cout << "Error writing to file." << endl;
    }
}

// Reading from a File
void readFromFile(const string& filename) {
    ifstream file(filename);
    if (file) {
        string line;
        cout << "Contents of '" << filename << "':" << endl;
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Error reading from file." << endl;
    }
}

// Appending to a File
void appendToFile(const string& filename, const string& data) {
    ofstream file(filename, ios::app);
    if (file) {
        file << data;
        cout << "Data appended to file successfully." << endl;
        file.close();
    } else {
        cout << "Error appending to file." << endl;
    }
}

// Deleting a File
void deleteFile(const string& filename) {
    if (remove(filename.c_str()) == 0) {
        cout << "File '" << filename << "' deleted successfully." << endl;
    } else {
        cout << "Error deleting file." << endl;
    }
}

int main() {
    string filename = "test.txt";
    string data = "Hello, World!";

    createFile(filename);
    writeToFile(filename, data);
    readFromFile(filename);
    appendToFile(filename, "\nThis is an appended line.");
    readFromFile(filename);
    deleteFile(filename);

    return 0;
}