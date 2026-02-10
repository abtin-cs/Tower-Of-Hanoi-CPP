#include <iostream>
using namespace std;

// Variable to store total number of moves
long long moves = 0;

// Recursive function to solve Tower of Hanoi
void hanoi(int n, char from, char to, char aux) {

    // Base case: if there is only one disk
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << to << endl;
        moves++;
        return;
    }

    // Move n-1 disks from source rod to auxiliary rod
    hanoi(n - 1, from, aux, to);

    // Move the largest disk to destination rod
    cout << "Move disk " << n << " from " << from << " to " << to << endl;
    moves++;

    // Move n-1 disks from auxiliary rod to destination rod
    hanoi(n - 1, aux, to, from);
}

int main() {
    int n;

    // Get number of disks from user
    cout << "Enter number of disks:" << endl;
    cout << "----A--------B--------C----" << endl;
    cin >> n;

    // Solve the problem: move disks from A to C using B
    hanoi(n, 'A', 'C', 'B');

    // Print total number of moves
    cout << "\nTotal moves: " << moves << endl;

    return 0;
}

