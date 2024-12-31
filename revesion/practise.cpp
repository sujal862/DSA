#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// Function to check if we can toggle at most one segment to match the target pattern
bool canToggle(const vector<string>& current, const vector<string>& target) {
    int diffCount = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (current[i][j] != target[i][j]) {
                diffCount++;
            }
        }
    }
    return diffCount <= 1;
}

int main() {
    // Input the seven-segment representation of digits 0-9
    vector<string> segment(3);
    for (int i = 0; i < 3; i++) {
        cin >> segment[i];
    }

    // Map to store the segment representation of each digit
    unordered_map<int, vector<string>> digitMap;
    for (int i = 0; i < 10; i++) {
        vector<string> digitSegment(3);
        for (int j = 0; j < 3; j++) {
            cin >> digitSegment[j];
        }
        digitMap[i] = digitSegment;
    }

    // Input the faulted number in seven-segment format
    vector<string> faultedNumber(3);
    for (int i = 0; i < 3; i++) {
        cin >> faultedNumber[i];
    }

    // Generate valid numbers by toggling segments
    long long sum = 0;
    int numLength = faultedNumber[0].length();
    for (int i = 0; i < numLength; i += 3) {
        // Extract current digit's segment
        vector<string> currentDigitSegment(3);
        for (int j = 0; j < 3; j++) {
            currentDigitSegment[j] = faultedNumber[j].substr(i, 3);
        }

        // Find the closest digit that can be formed by toggling at most one segment
        for (int digit = 0; digit < 10; digit++) {
            if (canToggle(currentDigitSegment, digitMap[digit])) {
                sum += digit;
            }
        }
    }

    cout << sum << endl;
    return 0;
}
