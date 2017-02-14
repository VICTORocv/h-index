//
//  main.cpp
//  h-index
//
//  Created by 郭悟清 on 2017/2/13.
//  Copyright © 2017年 郭悟清. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int hIndex(vector<int>& citations) {
        int num=citations.end()-citations.begin();
        if(num==1)
        {
            if(citations.at(0)==0)
                return 0;
            else
                return 1;
        }
        for(int i=num;i>0;i++)
        {
            int count1=0,count2=0;
            for(int j=0;j<num;j++)
            {
                if(citations.at(j)<=i)
                    count1++;
                if(citations.at(j)>=i)
                    count2++;
            }
            if(count1==count2)
                return count1;
        }
        return 0;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Solution s;
    vector<int> a;
    //int A[5]={3,0,6,1,5};
    a.push_back(1);
    a.push_back(1);
    //vector<int> a(A,A+5);
    int h=s.hIndex(a);
    cout<<h;
    return 0;
}
