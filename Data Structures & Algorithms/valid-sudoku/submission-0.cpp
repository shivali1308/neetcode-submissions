class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i<9; i++){
            unordered_map<int,int>seen;
            for(int j =0; j<9; j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else{
                    if(seen[board[i][j]]==1){
                        return false;
                    }
                    else{
                        seen[board[i][j]]=1;
                    }
                }
            }
        }
        for(int j=0; j<9;j++){
            unordered_map<int,int>seen;
            for(int i =0; i<9; i++){
                if(board[i][j]=='.'){
                    continue;
                }
                else{
                    if(seen[board[i][j]]==1){
                        return false;
                    }
                    else{
                        seen[board[i][j]]=1;
                    }
                }
            }
        }
        for (int row = 0; row < 9; row += 3) {
            
            for (int col = 0; col < 9; col += 3) {
                unordered_map<int,int>seen;
                for (int x = 0; x < 3; x++) {
                    for (int y = 0; y < 3; y++) {
                        if(board[row+x][col+y]=='.'){
                            continue;
                        }
                    else{
                        if(seen[board[row+x][col+y]]==1){
                            return false;
                        }
                        else{
                            seen[board[row+x][col+y]]=1;
                        }
                    }
                    }
                }
            }
        }
        return true;
    }
};