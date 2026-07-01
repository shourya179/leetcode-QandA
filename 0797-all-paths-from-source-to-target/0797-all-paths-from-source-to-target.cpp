class Solution {
void dfs(vector<vector<int>>&graph,int curr,int target,vector<int> path,vector<vector<int>> &ans){
    path.push_back(curr);
    if(curr == target){
        ans.push_back(path);
        return ;
    }
    for(auto i :graph[curr]){
        dfs(graph,i,target,path,ans);
    }
}
    public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>path;
        vector<vector<int>>ans;
        dfs(graph,0,n-1,path,ans);
        return ans;
    }
};