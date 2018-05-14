#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <cassert>

using namespace std;

void comparison(int x0,int x1, int x2, int y0, int y1, int y2)
{
    int A=0,B=0;
    if(x0!=y0)
        (x0>y0)?A+=1:B+=1;
    if(x1!=y1)
        (x1>y1)?A+=1:B+=1;
    if(x2!=y2)
        (x2>y2)?A+=1:B+=1;
    cout<<A<<" "<<B<<endl;
}

int main(){
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    comparison(a0,a1,a2,b0,b1,b2);
    return 0;
}
