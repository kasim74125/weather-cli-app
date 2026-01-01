
---

### 📄 `main.cpp`
```cpp
#include <iostream>
#include <string>

int main() {
    std::string city = "Istanbul";
    int temperature = 18;
    std::string condition = "Clear Sky";

    std::cout << "Weather in " << city << ": "
              << temperature << "°C, " << condition << std::endl;

    return 0;
}
