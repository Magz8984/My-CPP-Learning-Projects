#include <iostream>

using namespace std;


// T1 to T2 using T3 as auxiliary
int moves(int n, char t1, char t2, char t3) {
    if(n == 1) {
        cout << "Move " << n << " From " << t1 << " To " << t2 << " Through " << t3 << endl;
        return 1;
    }
   int step1 =  moves(n - 1, t1, t3, t2);

   int step2 = 1;
   cout << "Move " << n << " From " << t1 << " To " << t2 << " Through " << t3 << endl;

   int step3 = moves(n - 1, t3, t2, t1);

  return step1 + step2 + step3;
}

int main() {
    cout << "Number of steps taken  : " << moves(3, 'A', 'B', 'C') << endl;
    return 0;
}