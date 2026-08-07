class Solution {
public:

    bool findWord(int row, int column, int& m, int& n, vector<vector<char>>& board, string& word, int index){
        
        if(index == word.size()) return true;
        if(row<0 || column<0 || row>=m || column>=n) return false;
        if(board[row][column]!=word[index])return false;

        char temp = board[row][column];
        board[row][column] = '$';

        bool found = 
        findWord(row-1,column,m,n,board,word,index+1) || //UP
        findWord(row+1,column,m,n,board,word,index+1) || //DOWN
        findWord(row,column-1,m,n,board,word,index+1) || //LEFT
        findWord(row,column+1,m,n,board,word,index+1); //RIGHT

        board[row][column] = temp;

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        for(int i =0; i<m; i++){
            int n = board[i].size();
            for(int j =0; j<n; j++){
                if(board[i][j] == word[0]){
                    if(findWord(i,j,m,n,board,word,0)) return true;
                }
            }
        }
        return false;
    }
};
