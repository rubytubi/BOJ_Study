#include <iostream>
#include <string>
using namespace std;

int stack[10000];
int Top = -1;

void push(int n) { stack[++Top] = n; }

int empty() {
  if (Top < 0) {
    return 1;
  }

  else
    return 0;
}

int pop() {
  if (empty() == 1)
    return -1;
  else
    return stack[Top--];
}

int size() { return Top + 1; }

int top() {
  if (empty() == 1)
    return -1;
  else
    return stack[Top];
}

int main() {
  int N, num;
  string command;

  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> command;

    if (command.compare("push") == 0) {
      cin >> num;
      push(num);
    }

    else if (command.compare("pop") == 0) {
      cout << pop() << "\n";
    }

    else if (command.compare("size") == 0) {
      cout << size() << "\n";
    }

    else if (command.compare("empty") == 0) {
      cout << empty() << "\n";
    }

    else if (command.compare("top") == 0) {
      cout << top() << "\n";
    }
  }

  return 0;
}