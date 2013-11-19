//
//  main.cpp
//  Command Line Tool
//
//  Created by Ross Lewis on 11/19/13.
//  Copyright (c) 2013 Ross Lewis. All rights reserved.
//

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
int lonelyinteger(vector < int > a) {
    vector<int> testArray;
    int pos = 0;
    bool found = false;
    
    for(int i = 0; i < a.size();i++){
        testArray.push_back(-1);
        for(int j = 0; j < testArray.size(); j++){
            if(a[i] == testArray[j]){
                testArray[j] = -1;
                found = true;
                break;
            }
        }
        if(!found){
            testArray[pos] = a[i];
            pos++;
        }
        found = false;
    }
    int alone = -1;
    pos = 0;
    while(alone == -1){
        if(testArray[pos] != -1)
            alone = testArray[pos];
        pos++;
    }
    
    return alone;
    
}
/* Tail starts here */
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (std::numeric_limits<std::streamsize>::max(), '\n');
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}
