class Solution {
    bool dfs(vector<vector<int>>&graph,int curr, int dest,vector<bool> &visited){
        if(curr == dest)
            return true;
        visited[curr] = true;

        for(auto i :graph[curr]){
            if(visited[i] == false)
            if(dfs(graph,i,dest,visited))
            return true;
        }
        return false;
    }
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>graph(n);
    for(auto i :edges){
        graph[i[0]].push_back(i[1]);
        graph[i[1]].push_back(i[0]);
    }
    vector<bool>visited(n,false);
    return dfs(graph,source,destination,visited);
    }
};