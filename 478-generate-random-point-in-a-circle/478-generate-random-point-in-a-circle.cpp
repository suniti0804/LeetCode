class Solution {
public:
    
    double r, x, y;
    
    Solution(double radius, double x_center, double y_center) 
    {
        r=radius;
        x=x_center;
        y=y_center;
    }
    
    bool isInside(double X, double Y)
    {
        return ((X-x)*(X-x)+(Y-y)*(Y-y))<=r*r;
    }
    
    vector<double> randPoint() 
    {
        double X, Y;
        while(!isInside(X, Y))
        {
            X=(double)rand()/RAND_MAX*(r+r)+x-r;
            Y=(double)rand()/RAND_MAX*(r+r)+y-r;
        }
        return {X,Y}; 
    }
    
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */