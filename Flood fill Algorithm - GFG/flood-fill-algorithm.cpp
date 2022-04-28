// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    void fill(vector<vector<int>>& image, int r, int c, int m, int n, int target, int newColor)
    {
        if(r < 0 || c < 0 || r == m || c == n || image[r][c] == newColor || image[r][c] != target) 
            return;
        image[r][c] = newColor;
        fill(image, r + 1, c, m, n, target, newColor);
        fill(image, r - 1, c, m, n, target, newColor);
        fill(image, r, c + 1, m, n, target, newColor);
        fill(image, r, c - 1, m, n, target, newColor);
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        int m = image.size(), n = image[0].size();
        fill(image, sr, sc, m, n, image[sr][sc], newColor);
        return image;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>image(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> image[i][j];
		}
		int sr, sc, newColor;
		cin >> sr >> sc >> newColor;
		Solution obj;
		vector<vector<int>> ans = obj.floodFill(image, sr, sc, newColor);
		for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		}
	}
	return 0;
}  // } Driver Code Ends