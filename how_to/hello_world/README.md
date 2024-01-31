By using "using namespace std", you can use "cout" and other things without prefixing them with "std::"
#include <iostream>
using namespace std;

```
int main(){
    
    // "cout" with "<<" is used to output, similar to 
    // Python: print("Hello, world") or Java: System.out.println("Hello, world");
    cout << "Hello, world!" << endl;

    return 0;
}
```

/* 
WITHOUT "USING NAMESPACE STD;"
*/
#include <iostream>

int main() {
    std::cout << "Hello, world!" << std::endl;

    return 0;
}
