To format output in C++, you can use manipulators like `setw` and `setfill`.
The `setw` manipulator sets the width of the next input/output field,
and `setfill` sets the character to fill the width.

Example:

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n = 42;
    cout << setw(4) << setfill('0') << n << endl; // Output: 0042
    return 0;
}
```

In this example, `setw(4)` sets the width to 4 characters, and `setfill('0')` fills the empty spaces with '0'.
