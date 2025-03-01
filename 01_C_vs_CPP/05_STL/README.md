
## Source Code and Compilation

### 01_BubbleSort.c

#### Source Code:
```cpp
// BubbleSort.c
#include <stdio.h>

int main() {
  int data[] = {32, 71, 12, 45, 26};
  int i, step, n = 5, temp;

  for (step = 0; step < n - 1; step++) {
    for (i = 0; i < n - step - 1; i++) {
      if (data[i] > data[i + 1]) {
        temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
      }
    }
  }

  for (i = 0; i < n; i++) {
    printf("%d ", data[i]);
  }

  printf("\n");
  return 0;
}

/*
 * implementation is the same in both C and C++
 */

```
#### Compilation Command:
```sh
gcc 01_BubbleSort.c -o 01_BubbleSort.out
```
#### Output:
```
12 26 32 45 71 
```
### 01_BubbleSort.cpp

#### Source Code:
```cpp
// BubbleSort.cpp
#include <iostream>
using namespace std;

int main() {
  int data[] = {32, 71, 12, 45, 26};
  int n = 5, temp;

  for (int step = 0; step < n - 1; step++) {
    for (int i = 0; i < n - step - 1; i++) {
      if (data[i] > data[i + 1]) {
        temp = data[i];
        data[i] = data[i + 1];
        data[i + 1] = temp;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << data[i] << " ";
  }

  cout << endl;
  return 0;
}

/*
 * implementation is the same in both C and C++
 */

```
#### Compilation Command:
```sh
g++ 01_BubbleSort.cpp -o 01_BubbleSort.out
```
#### Output:
```
12 26 32 45 71 
```
### 02_Sort.c

#### Source Code:
```cpp
// Sort.c
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) { 
  return (*(int *)a < *(int *)b); 
}

int main() {
  int data[] = {32, 71, 12, 45, 26};

  qsort(data, 5, sizeof(int), compare);

  for (int i = 0; i < 5; i++) {
    printf("%d ", data[i]);
  }

  printf("\n");
  return 0;
}

/*
 * sizeof(int) and compare function passes to qsort
 * compare is type unsafe and needs complicated cast
 */

```
#### Compilation Command:
```sh
gcc 02_Sort.c -o 02_Sort.out
```
#### Output:
```
71 45 32 26 12 
```
### 02_Sort.cpp

#### Source Code:
```cpp
// Sort.cpp
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(int i, int j) { 
  return (i > j); 
}

int main() {
  int data[] = {32, 71, 12, 45, 26};

  sort(data, data + 5, compare);

  for (int i = 0; i < 5; i++)
    cout << data[i] << " ";

  cout << endl;
  return 0;
}

/*
 * Only compare passed to sort. No size is needed
 * Only Size is inferred from the type int of data
 * Compare function is type safe and simple with no casting
 */

```
#### Compilation Command:
```sh
g++ 02_Sort.cpp -o 02_Sort.out
```
#### Output:
```
71 45 32 26 12 
```
### 03_Stack.c

#### Source Code:
```cpp
// Stack.c
#include <stdio.h>

typedef struct stack {
  char data[100];
  int top;
} stack;

int empty(stack *p) { return p->top == -1; }

int top(stack *p) { return p->data[p->top]; }

void push(stack *p, char x) { p->data[++(p->top)] = x; }

void pop(stack *p) { if (!empty(p)) p->top = p->top - 1; }

int main() {
  stack s;
  s.top = -1;

  char ch, str[10] = "ABCDE";

  int i, len = sizeof(str);

  for (i = 0; i < len; i++)
    push(&s, str[i]);

  printf("Reversed String: ");
  while (!empty(&s)) {
    printf("%c", top(&s));
    pop(&s);
  }
  printf("\n");

  return 0;
}

/*
 * Lot of code for creating stack
 * top to be initialized
 * Cluttered interface for stack functions
 * Implemented by user - error-prone
 */

```
#### Compilation Command:
```sh
gcc 03_Stack.c -o 03_Stack.out
```
#### Output:
```
Reversed String:      EDCBA
```
### 03_Stack.cpp

#### Source Code:
```cpp
// Stack.cpp
#include <cstring>
#include <iostream>
#include <stack>

using namespace std;

int main() {
  char str[10] = "ABCDE";
  stack<char> s;
  for (int i = 0; i < strlen(str); i++) {
    s.push(str[i]);
  }

  cout << "Reversed String: ";
  while (!s.empty()) {
    cout << s.top();
    s.pop();
  }
  cout << endl;

  return 0;
}

/*
 * No codes for creating stack
 * No initilization
 * Clean interface for stack functions
 * Available in library - well tested
 */

```
#### Compilation Command:
```sh
g++ 03_Stack.cpp -o 03_Stack.out
```
#### Output:
```
Reversed String: EDCBA
```