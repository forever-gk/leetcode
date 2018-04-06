// Given numRows, generate the first numRows of Pascal's triangle.
//
//
// For example, given numRows = 5,
// Return
//
// [
//      [1],
//     [1,1],
//    [1,2,1],
//   [1,3,3,1],
//  [1,4,6,4,1]
// ]
//
//


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        if (numRows == 0)
            return vec; 
        if (numRows == 1)
            return {{1}};
        if (numRows == 2)
            return {{1}, {1,1}};
        vec = {{1}, {1,1}};
        for (int i = 3; i <= numRows; i++)
            genTriangle(i, vec);
        return vec;
    }
    void genTriangle(int numRows, vector<vector<int>> &vec)
    {
        vector<int> temp;
        vector<int> &before = vec[numRows-2];
        temp.push_back(1);
        for (int i = 0; i < before.size() - 1; i++)
        {
            temp.push_back(before[i] + before[i + 1]);
        }
        temp.push_back(1);
        vec.push_back(temp);
    }
};
