#include <iostream>
using namespace std;

int calculateSum(const int arr[], int size);
double getAverage(int sum, int size);
void addBonus(int arr[], int size, int bonus = 5);
int findHighest(const int* arr, int size);
int countPassed(const int arr[], int size);

int main() {
    const int SIZE = 5;
    int scores[SIZE] = {65, 82, 90, 45, 78};

    cout << "Original scores: ";
    for (int i = 0; i < SIZE; i++)
        cout << scores[i] << " ";
    cout << "\n";

    int sum = calculateSum(scores, SIZE);
    double avg = getAverage(sum, SIZE);

    cout << "Sum: " << sum << "\n";
    cout << "Average: " << avg << "\n";

    addBonus(scores, SIZE);
    cout << "Scores after bonus: ";
    for (int i = 0; i < SIZE; i++)
        cout << scores[i] << " ";
    cout << "\n";

    int highest = findHighest(scores, SIZE);
    int passed = countPassed(scores, SIZE);

    cout << "Highest score: " << highest << "\n";
    cout << "Number passed (>=70): " << passed << "\n";
    
    return 0;
}

int calculateSum(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

double getAverage(int sum, int size) {
    return static_cast<double>(sum) / size;
}

void addBonus(int arr[], int size, int bonus) {
    for (int i = 0; i < size; i++)
        arr[i] += bonus;
}

int findHighest(const int* arr, int size) {
    int highest = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > highest)
            highest = arr[i];        
    return highest;
}

int countPassed(const int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++)
        if (arr[i] >= 70)
            count++;
    return count;
}
