class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> box(9);
        for(int i=0;i<9;i++){
            
            for(int j=0;j<9;j++){
                char digit = board[i][j];
                if(digit=='.') continue;
                if(rows[i].count(digit)){
                    return false;
                }
                rows[i].insert(digit);
                if(cols[j].count(digit)){
                    return false;
                }
                cols[j].insert(digit);

                int boxIndex = (i / 3) * 3 + (j / 3);
                if(box[boxIndex].count(digit)){
                    return false;
                }
                box[boxIndex].insert(digit);
                
                
            }
            
        }
        return true;
    }
};