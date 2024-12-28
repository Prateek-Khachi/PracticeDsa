class Solution {

int sz;
vector<vector<string>> ans;
vector<bool> clmn;
vector<bool> diag1;
vector<bool> diag2;

public:

    void printAns(vector<bool>& temp){

        vector<string> vecstr;
        string str;

        for(int i=0; i<temp.size(); i){
            for(int j =0; j<sz; j++){
                
                if(temp[i]){
                str.push_back('Q');
                }else{
                str.push_back('.');            
                }
                i++;

            }
            vecstr.push_back(str);
            str="";
        }
        ans.push_back(vecstr);
    }

    void solve(int R, vector<bool>& temp){

        if(R==sz)
        {
            printAns(temp);
            return; 
        }

        for(int C=0; C<sz; C++){

            if (clmn[C] || diag1[R + C] || diag2[sz + R - C - 1]) {
                continue;
            }

            temp[sz*R+C]=true;
            clmn[C] =true;
            diag1[R+C]=true;
            diag2[sz+R-C-1]=true;

            solve(R+1, temp);

            temp[sz*R+C]=false;
            clmn[C]=false;
            diag1[R+C]=false;
            diag2[sz+R-C-1]=false;
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        
        sz = n ;
        vector<bool> temp(n*n) ;
        //(n, vector<bool>(n, false));
        clmn.assign(n,false);
        diag1.assign(2*n-1,false);
        diag2.assign(2*n-1,false);


        solve(0, temp);

        return ans; 
    }
};