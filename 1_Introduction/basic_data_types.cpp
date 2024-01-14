#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
// #include <iomanip> this is setprecision()
using namespace std;

// type 1
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    long int b;
    char c;
    float d;
    double e;
    cin >> a >> b >> c >> d >> e;
    cout << a << endl << b << endl << c << endl;
    cout << fixed << setprecision(3) << d << endl;
    cout << fixed <<setprecision(9) << e << endl;
    return 0;
}

// type 2
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a;
    long int b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%f\n%lf", a, b, c, d, e);
    
    return 0;
}

