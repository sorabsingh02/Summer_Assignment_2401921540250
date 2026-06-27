class Solution {
public:
    vector<int> indexNSL(vector<int> heights) {
        stack<pair<int,int>> st;
        vector<int> v;

        for(int i = 0; i < heights.size(); i++) {
            while(!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if(st.empty()) {
                v.push_back(-1);
            }
            else {
                v.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }

        return v;
    }

    vector<int> indexNSR(vector<int> heights) {
        stack<pair<int,int>> st;
        vector<int> v;

        for(int i = heights.size()-1; i >= 0; i--) {
            while(!st.empty() && st.top().first >= heights[i]) {
                st.pop();
            }
            if(st.empty()) {
                v.push_back(heights.size());
            }
            else {
                v.push_back(st.top().second);
            }
            st.push({heights[i], i});
        }
        
        reverse(v.begin(), v.end());

        return v;
    }
    
    int largestRectangleArea(vector<int>& heights) {
        vector<int> idxNSL = indexNSL(heights);
        vector<int> idxNSR = indexNSR(heights);

        vector<int> widthArr;
        for(int i = 0; i < heights.size(); i++) {
            widthArr.push_back( (idxNSR[i] - idxNSL[i]) - 1);
        }

        int maxArea = 0;
        for(int i = 0; i < heights.size(); i++) {
            int area = heights[i] * widthArr[i];
            if( area > maxArea) maxArea = area;
        }

        return maxArea;
    }
};
