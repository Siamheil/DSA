class Solution {
  public:
    int row[4]={-1,1,0,0};
    int col[4]={0,0,-1,1};
    int r;
    int c;

    bool valid(int i,int j){
        return i>=0 && i<r && j>=0 && j<c;
    }

    int helpaterp(vector<vector<int>> hospital) {
        r=hospital.size();
        c=hospital[0].size();
        queue<pair<int,int>>q;

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hospital[i][j]==2){
                    q.push(make_pair(i,j));
                }
            }
        }
        if(q.empty()) return 0;
        int timer=0;
        while(!q.empty()){
            timer++;
            int curr_patient=q.size();

            while(curr_patient--){
                int i=q.front().first;
                int j=q.front().second;
                q.pop();

                for(int k=0;k<4;k++){
                    int ni = i + row[k];
                    int nj = j + col[k];

                    if(valid(ni,nj) && hospital[ni][nj]==1){
                        hospital[ni][nj]=2;
                        q.push(make_pair(ni,nj));
                    }
                }
            }
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(hospital[i][j]==1) return -1;
            }
        }

        return timer-1;
    }
};

